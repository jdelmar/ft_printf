/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 17:38:05 by jdelmar           #+#    #+#             */
/*   Updated: 2014/11/14 18:51:14 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;

	if (!dst || !src)
		return (0);
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (size + len_src);
	if (len_src < size - len_dst)
	{
		ft_strncpy(dst + len_dst, src, len_src);
		dst += len_dst + len_src;
	}
	else
	{
		ft_strncpy(dst + len_dst, src, size - 1);
		dst += size - 1;
	}
	*dst = '\0';
	return (len_src + len_dst);
}
