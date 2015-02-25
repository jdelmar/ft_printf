/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/19 14:26:15 by jdelmar           #+#    #+#             */
/*   Updated: 2015/02/24 22:08:56 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printnbr(char *buff, va_list ap, int *len)
{
	int	nb;
	int	size;

	nb = va_arg(ap, int);
	size = 1;
	if (nb < 0)
	{
		*buff = '-';
		nb *= -1;
		len++;
		buff++;
	}
	while (nb / size > 9)
		size *= 10;
	while (size > 0)
	{
		*buff = (nb / size + '0');
		nb %= size;
		size /= 10;
		len++;
		buff++;
	}
	return (buff + *len);
}
