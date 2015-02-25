/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 21:23:42 by jdelmar           #+#    #+#             */
/*   Updated: 2014/11/12 18:10:45 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		cur;
	char	*str;
	int		ret;

	ret = n;
	i = 1;
	cur = 0;
	str = (char *)malloc(sizeof(char) * 22);
	if (n < 0)
	{
		ft_memset(str, '-', 1);
		n *= -1;
		cur++;
	}
	while (n / i > 9)
		i *= 10;
	while (i > 0)
	{
		str[cur++] = (n / i + '0');
		n %= i;
		i /= 10;
	}
	str[cur] = '\0';
	return ((ret < -2147483647) ? ft_strdup("-2147483648") : str);
}
