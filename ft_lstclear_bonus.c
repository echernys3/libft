#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next_node;

	current = *lst;
	while (current)
	{
		next_node = current -> next;
		ft_lstdelone(current, del);
		current = next_node;
	}
	*lst = NULL;
}
// Setting pointers to NULL after freeing them is generally considered a good practice in C programming. 
// It helps to avoid dangling pointers, which are pointers that refer to freed memory. 
// This can be especially important in larger programs where memory management can become complex.