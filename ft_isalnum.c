/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkumar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 17:40:37 by pkumar            #+#    #+#             */
/*   Updated: 2018/04/19 17:40:37 by pkumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if (i >= 48 && i <= 57)
		return (1);
	else if (i >= 65 && i <= 90)
		return (1);
	else if (i >= 97 && i <= 122)
		return (1);
	else
		return (0);
}
