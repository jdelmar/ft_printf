/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/19 03:49:23 by jdelmar           #+#    #+#             */
/*   Updated: 2015/02/27 15:18:10 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_hexavalue(unsigned long x)
{
	if (x >= 1 && x <= 9)
		return ('0' + x);
	else if (x >= 10 && x <= 15)
	{
		x = x - 10;
		return ('a' + x);
	}
	return (0);
}

char	*ft_htoa(char *buff, unsigned long n, int *len)
{
	int				size;
	unsigned long	x;

	x = n;
	size = 0;
	while (x >= 16)
	{
		x = x / 16;
		size++;
	}
	len += size;
	while (size >= 0)
	{
		x = n % 16;
		*buff = ft_hexavalue(x);
		n = n / 16;
		buff++;
		size--;
	}
	return (buff + *len);
}
