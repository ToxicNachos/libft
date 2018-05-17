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
	unsigned char	ch;
	int				i;

	i = 0;
	ch = c;
	while (*s && ch != '\0')
	{
		++i;
		if (*s == ch)
			return ((char *)s + i);
		s++;
	}
	return (NULL);
}
