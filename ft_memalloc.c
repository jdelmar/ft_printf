/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 17:57:16 by jdelmar           #+#    #+#             */
/*   Updated: 2014/12/29 18:16:02 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*s;

	if ((int)size < 0)
		return (NULL);
	s = (char *)malloc(sizeof(*s) * size);
	if (!s)
		return (NULL);
	ft_bzero(s, size);
	return (s);
}
