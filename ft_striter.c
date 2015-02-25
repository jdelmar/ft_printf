/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 19:11:01 by jdelmar           #+#    #+#             */
/*   Updated: 2014/11/11 16:25:02 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int	counter;
	int	len;

	if (s != '\0' && f != '\0')
	{
		len = ft_strlen(s);
		counter = 0;
		while (counter < len)
		{
			(*f)(s);
			s++;
			counter++;
		}
	}
}
