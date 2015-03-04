/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 21:33:27 by jdelmar           #+#    #+#             */
/*   Updated: 2015/03/03 22:26:26 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printlnbr(char *buff, va_list ap, int *len)
{
	long	n;

	n = va_arg(ap, long);
	*len += ft_convert(buff, n, 10, 0);
	return (buff + *len);
}
