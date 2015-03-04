/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 17:15:59 by jdelmar           #+#    #+#             */
/*   Updated: 2015/03/03 21:37:11 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_unsigned_convert(char *buff, unsigned long n, int b, int maj)
{
	char			base[b + 1];
	int				i;
	unsigned int	tmp;

	i = -1;
	while (++i < b)
		if (i < 10)
			base[i] = '0' + i;
		else
			base[i] = (maj ? 'A' : 'a') + i - 10;
	i = 0;
	tmp = n;
	while (tmp >= (unsigned int)b)
	{
		tmp /= b;
		i++;
	}
	buff[i + 1] = 0;
	while (n >= (unsigned int)b)
	{
		buff[i--] = base[n % b];
		n /= b;
	}
	buff[i] = base[n % b];
	return (ft_strlen(buff));
}
