/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/02 19:51:05 by jdelmar           #+#    #+#             */
/*   Updated: 2015/03/04 20:24:54 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printptr(char *buff, va_list ap, int *len)
{
	unsigned long	addr;

	*buff++ = '0';
	*buff++ = 'x';
	*len += 2;
	addr = va_arg(ap, unsigned long);
	*len += ft_convert(buff + 2, addr, 16, 0);
	return (buff + *len);
}
