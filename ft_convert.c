/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/03 22:01:27 by jdelmar           #+#    #+#             */
/*   Updated: 2015/03/04 17:37:15 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_convert(char *buff, long n, int b, int maj)
{
	char			base[b + 1];
	int				i;
	int				tmp;

	i = -1;
	while (++i < b)
		if (i < 10)
			base[i] = '0' + i;
		else
			base[i] = (maj ? 'A' : 'a') + i - 10;
	i = 0;
	tmp = n;
	while (tmp >= b)
	{
		tmp /= b;
		i++;
	}
	buff[i + 1] = 0;
	while (n >= b)
	{
		buff[i--] = base[n % b];
		n /= b;
	}
	buff[i] = base[n % b];
	return (ft_strlen(buff));
}
