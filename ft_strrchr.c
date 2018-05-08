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
	int		len;
	char	ch;

	len = 0;
	ch = c;
	while (s[len])
		len++;
	while (len >= 0)
	{
		if (s[len] == ch)
			return (s[len]);
		len--;
	}
	return (NULL);
}
