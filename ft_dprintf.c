/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 17:24:47 by jdelmar           #+#    #+#             */
/*   Updated: 2015/03/03 18:55:04 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_dprintf(int fd, const char *format, ...)
{
	va_list	ap;
	char	buff[BUFF];
	int		len;

	ft_bzero(buff, BUFF);
	va_start(ap, format);
	len = ft_vsprintf(buff, format, ap);
	write(fd, buff, len);
	return (len);
}
