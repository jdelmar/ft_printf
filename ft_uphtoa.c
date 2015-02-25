/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uphtoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/19 14:24:28 by jdelmar           #+#    #+#             */
/*   Updated: 2015/02/19 14:25:47 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int		ft_hexavalue(unsigned long x)
{
	if (x >= 0 && x <= 9)
		return ('0' + x);
	else if (x >= 10 && x <= 15)
	{
		x = x - 10;
		return ('A' + x);
	}
	return (0);
}

char	*ft_uphtoa(char *buff, unsigned long n)
{
	int				size;
	int				index;
	unsigned long	x;

	x = n;
	size = 0;
	while (x >= 16)
	{
		x = x / 16;
		size++;
	}
	index = size;
	while (size >= 0)
	{
		x = n % 16;
		*buff = ft_hexavalue(x);
		n = n / 16;
		*buff++;
		size--;
	}
	return (buff + index);
}
