/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:42:00 by jdelmar           #+#    #+#             */
/*   Updated: 2014/12/29 18:48:41 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*s_1;
	char	*s_2;

	i = 0;
	j = 0;
	s_1 = (char *)s1;
	s_2 = (char *)s2;
	if (!s_2 || !*s_2)
		return (s_1);
	while (s_1[i] && (i + j) < n)
	{
		if (s_1[i + j] == s2[j])
			j++;
		else
		{
			j = 0;
			i++;
		}
		if (s_2[j] == '\0')
			return (s_1 + i);
	}
	return (NULL);
}
