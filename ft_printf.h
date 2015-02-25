/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/19 03:50:38 by jdelmar           #+#    #+#             */
/*   Updated: 2015/02/24 20:31:17 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

int		ft_dprintf(int fd, const char *format, ...);
int		ft_fprintf(char *buff, const char *format, ...);
int		ft_printf(const char *format, ...);
int		ft_sprintf(char *buff, const char *format, ...);
int		ft_vsprintf(char *buff, const char *format, va_list ap);
char	*ft_printchar(char *buff, va_list ap, int *len);
char	*ft_printstr(char *buff, va_list ap, int *len);
char	*ft_printnbr(char *buff, va_list ap, int *len);
char	*ft_printhexa(char *buff, va_list ap, int *len);

#endif
