/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 18:19:01 by jdelmar           #+#    #+#             */
/*   Updated: 2015/03/04 16:47:01 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printhexa(char *buff, va_list ap, int *len)
{
	unsigned int	hex;
	int				i;

	hex = va_arg(ap, unsigned long);
	i = ft_unsigned_convert(buff, hex, 16, 0);
	*len += i;
	return (buff + i);
}
