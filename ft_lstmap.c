/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmar <jdelmar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/30 01:50:30 by jdelmar           #+#    #+#             */
/*   Updated: 2014/12/30 03:29:31 by jdelmar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*ptr;

	if (!lst || !f)
		return (NULL);
	new_lst = f(lst);
	if (!new_lst)
		return (NULL);
	ptr = new_lst;
	while ((lst = lst->next))
	{
		ptr->next = f(lst);
		ptr = ptr->next;
	}
	return (new_lst);
}
