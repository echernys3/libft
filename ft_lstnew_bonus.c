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