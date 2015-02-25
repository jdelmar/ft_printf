/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/16 13:53:42 by jdelmar           #+#    #+#             */
/*   Updated: 2015/02/25 15:53:46 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char*	(*f_type[128])() = {
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, ft_printchar, ft_printnbr, NULL, NULL, NULL,
	NULL, ft_printnbr, NULL, NULL, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, ft_printstr, NULL, NULL, NULL, NULL,
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL
};

int		ft_vsprintf(char *buff, const char *fmt, va_list ap)
{
	int		i;

	i = 0;
	while (*fmt)
	{
		if (*fmt == '%')
		{
			if (f_type[(char)*fmt + 1])
				f_type[(char)*fmt + 1](buff + i, ap, &i);
			fmt += 2;
			continue ;
		}
		*buff = *fmt;
		fmt++;
		buff++;
		i++;
	}
	return (i);
}

int		ft_dprintf(int fd, const char *format, ...)
{
	va_list	ap;
	char	buff[0xf00000];
	int		len;

	ft_bzero(buff, 0xf00000);
	va_start(ap, format);
	len = ft_vsprintf(buff, format, ap);
	write(fd, buff, len);
	return (len);
}

int		ft_sprintf(char *buff, const char *format, ...)
{
	va_list	ap;
	int		len;

	va_start(ap, format);
	len = ft_vsprintf(buff, format, ap);
	write(1, buff, len);
	return (len);
}

int		ft_printf(const char *format, ...)
{
	va_list	ap;
	char	buff[0xf00000];
	int		len;

	ft_bzero(buff, 0xf00000);
	va_start(ap, format);
	len = ft_vsprintf(buff, format, ap);
	write(1, buff, len);
	va_end(ap);
	return (len);
}
