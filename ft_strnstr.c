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

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	int		i;
	size_t	pos;

	i = 0;
	pos = 0;
	if (len == 0)
		return ((char *)str);
	while (str[i])
	{
		while (find[pos] == str[i + pos] && pos < len)
		{
			if (pos == len - 1)
				return ((char *)str + i);
			pos++;
		}
		pos = 0;
		i++;
	}
	return (0);
}
