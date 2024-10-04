#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*currentlst;

	currentlst = *lst;
	if (!new)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		while (currentlst->next != NULL)
			currentlst = currentlst->next;
		currentlst->next = new;
	}
}