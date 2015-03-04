/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/16 13:53:42 by jdelmar           #+#    #+#             */
/*   Updated: 2015/03/04 03:24:44 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*(*g_type[128])() = {
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, ft_printmodulo, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, ft_printlnbr, NULL, NULL,
	NULL, ft_printlnbr, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	ft_printuphexa, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, ft_printchar, ft_printnbr, NULL, NULL, NULL,
	NULL, ft_printnbr, NULL, NULL, NULL, NULL, NULL, ft_printoctal,
	ft_printptr, NULL, NULL, ft_printstr, NULL, NULL, NULL, NULL,
	ft_printhexa, NULL, NULL, NULL, NULL, NULL, NULL, NULL
};

int		ft_vsprintf(char *buff, const char *fmt, va_list ap)
{
	int		i;

	i = 0;
	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			if (g_type[(int)*fmt])
				buff = g_type[(int)*fmt++](buff, ap, &i);
		}
		else
		{
			*buff = *fmt;
			fmt++;
			buff++;
			i++;
		}
	}
	return (i);
}

int		ft_printf(const char *format, ...)
{
	va_list	ap;
	char	buff[BUFF];
	int		len;

	ft_bzero(buff, BUFF);
	va_start(ap, format);
	len = ft_vsprintf(buff, format, ap);
	write(1, buff, len);
	va_end(ap);
	return (len);
}
