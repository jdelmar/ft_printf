/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 16:47:39 by jdelmar           #+#    #+#             */
/*   Updated: 2014/12/29 21:26:10 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * i);
	if (!str)
		return (NULL);
	while (i--)
		str[i] = f(i, s[i]);
	return (str);
}
