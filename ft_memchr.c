/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:27:23 by jdelmar           #+#    #+#             */
/*   Updated: 2014/11/12 22:03:18 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;
	unsigned char	uc;

	if (!s)
		return (0);
	ptr = (unsigned char *)s;
	uc = (unsigned char)c;
	i = 0;
	while (ptr[i] != uc && i < n - 1)
		i++;
	return (ptr[i] == uc ? ptr + i : 0);
}
