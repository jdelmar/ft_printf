/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 19:21:28 by jdelmar           #+#    #+#             */
/*   Updated: 2015/02/25 15:11:46 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printchar(char *buff, va_list ap, int *len)
{
	char	c;

	c = va_arg(ap, int);
	*buff = c;
	*len = *len + 1;
	return (buff + *len);
}
