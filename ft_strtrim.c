/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 14:32:54 by jdelmar           #+#    #+#             */
/*   Updated: 2014/11/18 16:41:03 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	if (!s)
		return (0);
	while (ft_isspace(s[i]) && s[i])
		i++;
	j = ft_strlen(s) - 1;
	while (ft_isspace(s[j]) && i < j)
		j--;
	str = ft_strsub(s, i, j - i + 1);
	return (str);
}
