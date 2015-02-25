/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/30 00:31:48 by jdelmar           #+#    #+#             */
/*   Updated: 2014/12/30 23:09:16 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ptr;

	if (!del || !alst || !*alst)
		return ;
	ptr = *alst;
	while (ptr)
	{
		del(ptr->content, ptr->content_size);
		free(ptr);
		ptr = ptr->next;
	}
	*alst = NULL;
}
