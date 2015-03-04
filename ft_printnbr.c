/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/19 14:26:15 by jdelmar           #+#    #+#             */
/*   Updated: 2015/03/02 23:31:56 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printnbr(char *buff, va_list ap, int *len)
{
	int		nb;
	char	*n;

	nb = va_arg(ap, int);
	n = ft_itoa(nb);
	buff = ft_strcat(buff, n);
	*len += ft_strlen(n);
	return (buff + ft_strlen(n));
}
