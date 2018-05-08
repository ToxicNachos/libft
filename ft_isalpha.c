/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkumar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 17:45:10 by pkumar            #+#    #+#             */
/*   Updated: 2018/04/19 17:45:12 by pkumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if (i >= 65 && i <= 90)
		return (i);
	else if (i >= 97 && i <= 122)
		return (i);
	else
		return (0);
}
