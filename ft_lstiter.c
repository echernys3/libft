#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;
	
	current = lst;
	if (!current)
		return ;
	while (current)
	{
		(*f)(current -> content);
		current = current -> next;
	}
}