/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkumar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 18:07:54 by pkumar            #+#    #+#             */
/*   Updated: 2018/04/22 18:07:56 by pkumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*tmp;
	int		i;

	i = 0;
	ch = c;
	tmp = (char *)s;
	while (*tmp)
	{
		++i;
		if (*tmp == ch)
			return (tmp + i);
		tmp++;
	}
	return (NULL);
}
