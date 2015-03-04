/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuphexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/02 19:25:15 by jdelmar           #+#    #+#             */
/*   Updated: 2015/03/04 16:48:36 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printuphexa(char *buff, va_list ap, int *len)
{
	unsigned int	hex;
	int				i;

	hex = va_arg(ap, unsigned long);
	i = ft_unsigned_convert(buff, hex, 16, 1);
	*len += i;
	return (buff + i);
}
