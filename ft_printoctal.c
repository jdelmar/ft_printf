/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printoctal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/02 19:37:48 by jdelmar           #+#    #+#             */
/*   Updated: 2015/03/04 16:48:06 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printoctal(char *buff, va_list ap, int *len)
{
	unsigned int	oct;
	int				i;

	oct = va_arg(ap, unsigned int);
	i = ft_unsigned_convert(buff, oct, 8, 0);
	*len += i;
	return (buff + i);
}
