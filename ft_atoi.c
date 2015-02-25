/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:33:26 by jdelmar           #+#    #+#             */
/*   Updated: 2014/11/12 17:44:53 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		sign;
	int		value;
	char	*cur;

	cur = (char *)str;
	value = 0;
	while (*cur == ' ' || *cur == '\n' || *cur == '\v' \
	|| *cur == '\t' || *cur == '\r' || *cur == '\f')
		cur++;
	sign = (*cur == '-') ? -1 : 1;
	cur = (*cur == '+' || *cur == '-') ? cur + 1 : cur;
	while (*cur >= '0' && *cur <= '9')
	{
		value = value * 10 + *cur - 48;
		cur++;
	}
	value *= sign;
	return (value);
}
