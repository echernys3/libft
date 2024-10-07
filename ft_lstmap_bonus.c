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

t_list	*ft_lstmap(t_list **lst, void *(*f)(void *), void *(*del)(void *))
{
	void	*newcontent;
	t_list	*newlst;
	t_list	*save;
	t_list	*current;

	if (!(lst) || !(*lst) || !(f) || !(del))
		return (NULL);
	while (current)
	{
		newlst = ft_lstnew(f(current->content));
		save = newlst->next;
		if (!(newlst))
		{
			ft_lstclear(&save, del);
			return (0);
		}
		newlst = ft_lstnew(newcontent);
		newlst -> next = newlst;
		current = current -> next;
	}
}
