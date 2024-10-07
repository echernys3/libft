/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echernys <echernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:36:49 by echernys          #+#    #+#             */
/*   Updated: 2024/10/07 12:53:55 by echernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_listnew(void *content)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (!(newnode))
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newlist);
}
