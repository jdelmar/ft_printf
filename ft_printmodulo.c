/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmodulo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 17:08:38 by jdelmar           #+#    #+#             */
/*   Updated: 2015/03/03 17:12:42 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printmodulo(char *buff, va_list ap, int *len)
{
	*buff = '%';
	*len++;
	(void)ap;
	return (buff + 1);
}
