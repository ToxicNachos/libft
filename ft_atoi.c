/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkumar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 17:51:44 by pkumar            #+#    #+#             */
/*   Updated: 2018/04/19 19:30:21 by pkumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	long long int	num;
	long long int	isneg;

	i = 0;
	num = 0;
	isneg = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
		isneg = -1;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += (long long int)str[i] - '0';
		i++;
	}
	if (num >= 2147483648)
		return (0);
	if (num <= -2147483648)
		return (-1);
	return (num * isneg);
}
