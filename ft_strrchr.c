/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 14:13:20 by jdelmar           #+#    #+#             */
/*   Updated: 2014/11/11 16:01:33 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*str;
	int		i;

	str = (char *)s;
	ch = (char)c;
	i = ft_strlen(s);
	if (c == 0)
		return (str + i);
	while (i >= 0)
	{
		if (str[i] == ch)
			return (str + i);
		i--;
	}
	return (NULL);
}
