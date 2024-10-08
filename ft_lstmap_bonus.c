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
	t_list	*current;
	t_list	*previous;

	current = lst;
	while (current != NULL)
	{
		current -> content = f(lst -> content);
		if (lst -> content == NULL)
		{
			previous -> next = current -> next;
			ft_lstdelone(current, del);
			current = previous -> next;
		}
		else
		{
			previous = current;
			current = current -> next;
		}
	}
	return (lst);
}
