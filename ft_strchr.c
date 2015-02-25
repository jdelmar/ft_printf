/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:17:48 by jdelmar           #+#    #+#             */
/*   Updated: 2014/11/11 15:57:21 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	char	*str;
	int		i;
	int		j;

	str = (char *)s;
	ch = (char)c;
	i = 0;
	if (ch == '\0')
	{
		j = ft_strlen(str);
		return (str + j);
	}
	while (str[i])
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	return (NULL);
}
