/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchwart.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/20 16:53:14 by jdelmar           #+#    #+#             */
/*   Updated: 2015/02/20 17:00:44 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		nbr_bits(unsigned int nbr)
{
	int     i;

	i = 1;
	while ((nbr = nbr >> 1))
		i++;
	return (i);
}

void    ft_putwchart(wchar_t wchar, int *len, char *buff, int i)
{
	unsigned int    ch;
	int             n;

	ch = (unsigned int)wchar;
	n = nbr_bits(ch);
	if (n > 7 && ((*len += 1)))
	{
		if (n > 11 && ((*len += 1)))
		{
			if (n > 16 && ((*len += 2)))
			{
				buff[i++] = ((ch >> 18) & 7) | 240;
				buff[i++] = ((ch >> 12) & 63) | 128;
			}
			else if ((*len += 1))
				buff[i++] = ((ch >> 12) & 15) | 224;
			buff[i++] = ((ch >> 6) & 63) | 128;
		}
		else if ((*len += 1))
			buff[i++] = ((ch >> 6) & 31) | 192;
		buff[i++] = (ch & 63) | 128;
	}
	else if ((*len += 1))
		buff[i++] = ch;
}
