#include "libft.h"

int	ft_isprint(int c)
{
	if (!(ft_iscntrl(c)))
		return (1);
	return (0);
}