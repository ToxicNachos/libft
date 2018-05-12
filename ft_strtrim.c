/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkumar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 19:50:54 by pkumar            #+#    #+#             */
/*   Updated: 2018/05/07 19:51:05 by pkumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strtrim(char const *s)
{
	int		i;
	int		l;
	char	*res;

	i = -1;
	if (s == NULL)
		return ('\0');
	l = ft_strlen(s);
	while (s[l - 1] == '\t' || s[l - 1] == '\n' || s[l - 1] == ' ')
		l--;
	while (s[++i] == '\t' || s[i] == '\n' || s[i] == ' ')
		l--;
	if (l <= 0)
		l = 0;
	res = (char *)malloc(sizeof(char) * (l + 1));
	if (res == NULL)
		return ('\0');
	s += i;
	i = -1;
	while (++i < l)
		res[i] = *s++;
	res[i] = '\0';
	return (*res);
}
