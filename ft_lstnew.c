#include "libft.h"

t_list	*ft_listnew(void *content)
{
	t_list	*newlist;

	newlist = malloc(sizeof(t_list));
	if (!(newnote))
		return (NULL);
	newlist->content;
	newlist->next = NULL;
	return (newlist);
}