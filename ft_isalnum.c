#include "libft.h"

int	ft_isalnum(int c)
{
// != 0 pas nécessaire dans la condition
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}