/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkumar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 17:54:53 by pkumar            #+#    #+#             */
/*   Updated: 2018/04/19 17:54:54 by pkumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while ((str1[i] || str2[i]) && r == 0 && (size_t)i < n)
	{
		if (str1[i] != str2[i])
			r = str1[i] - str2[i];
		i++;
	}
	return (r);
}
