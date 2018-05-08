/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkumar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 18:30:39 by pkumar            #+#    #+#             */
/*   Updated: 2018/05/07 18:30:41 by pkumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char *str, char c)
{
	int i;
	int w;
	int x;

	i = 0;
	w = 0;
	x = 0;
	while (str[x])
	{
		if (w == 0 && str[x] != c)
		{
			w++;
			i++;
		}
		else if (w == 1 && str[x] == c)
			w = 0;
		x++;
	}
	return (i);
}

static int	ft_strclen(char *str, char c)
{
	int	i;

	i = 0;
	while (*str != '\0' && *str != c)
	{
		i++;
		str++;
	}
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		nw;
	int		i;
	int		x;

	i = 0;
	x = 0;
	nw = ft_count_words((char *)s, c);
	res = (char **)malloc(sizeof(*res) * (ft_count_words((char *)s, c) + 1));
	if (res == NULL)
		return (NULL);
	while (nw--)
	{
		while (s[x] == c)
			x++;
		res[i] = ft_strsub((char *)s, x, ft_strclen(char *)s, c);
		if (res[i] == NULL)
			return (NULL);
		i++;
	}
	res[i] = NULL;
	return (res);
}
