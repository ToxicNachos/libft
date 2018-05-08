/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkumar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 19:10:47 by pkumar            #+#    #+#             */
/*   Updated: 2018/05/06 19:10:48 by pkumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t s)
{
	char *str;

	str = (char *)malloc(sizeof(char) * s);
	if (str == NULL)
		return (NULL);
	ft_memset(str, '\0', s + 1);
	return (str);
}