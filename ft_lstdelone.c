#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	temp;
	while (lst != NULL)
	{
		temp = lst;
		lst = lst->next
		(*del)temp;
	}
}