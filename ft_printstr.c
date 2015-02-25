/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/19 03:13:39 by jdelmar           #+#    #+#             */
/*   Updated: 2015/02/25 16:00:06 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*ft_printstr(char *buff, va_list ap, int *len)
{
	char	*str;

	str = va_arg(ap, char *);
	buff = ft_strcat(buff, str);
	*len = ft_strlen(str);
	return (buff + *len);
}
