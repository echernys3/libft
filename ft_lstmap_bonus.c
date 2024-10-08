/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echernys <echernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:36:46 by echernys          #+#    #+#             */
/*   Updated: 2024/10/07 12:36:46 by echernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*newnode;

	if (!f || !del)
		return (NULL);
	while (lst)
	{
		if (!(newnode = ft_lstnew(f(lst -> content))))
		{
			while (head)
			{
					newnode = head -> next;
					del(head -> content);
					free(head);
					head = newnode;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&head, newnode);
		lst = lst -> next;
	}
	return (head);
}
