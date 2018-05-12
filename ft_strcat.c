/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkumar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 18:13:09 by pkumar            #+#    #+#             */
/*   Updated: 2018/04/22 18:13:10 by pkumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i1;
	int		i2;
	char	*tmp;

	i1 = 0;
	i2 = 0;
	tmp = (char *)malloc(sizeof(s1));
	while (s1[i1])
	{
		tmp[i1] = s1[i1];
		i1++;
	}
	i1++;
	while (s2[i2])
	{
		tmp[i1] = s2[i2];
		i1++;
		i2++;
	}
	return (tmp);
}
