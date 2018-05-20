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
	size_t	i;

	if (len == 0 || *find == '\0')
		return ((char *)str);
	i = 0;
	while (*str && len)
	{
		if (*str == find[i])
			i++;
		else
			i = 0;
		if (find[i] == '\0')
			return ((char *)(str - i + 1));
		str++;
		len--;
	}
	return (NULL);
}
