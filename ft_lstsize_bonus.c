#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	counter;

	counter = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		lst = lst->next;
		counter++;
	}
	return (counter);
}