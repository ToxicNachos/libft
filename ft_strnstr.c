/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkumar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 15:42:24 by pkumar            #+#    #+#             */
/*   Updated: 2018/04/20 15:42:25 by pkumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int i;
	int pos;

	i = 0;
	pos = 0;
	if (str[i] == '\0' || to_find == '\0' || len == 0)
		return ((char *)str);
	while (str[i])
	{
		while (to_find[pos] == str[i + pos] && (size_t)pos < len)
		{
			if ((size_t)pos == len - 1)
				return ((char *)str + i);
			pos++;
		}
		pos = 0;
		i++;
	}
	return (0);
}
