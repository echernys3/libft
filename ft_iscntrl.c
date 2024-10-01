#include "libft.h"

int	ft_iscntrl(int c)
{
	if ( c >= 0 && c < 32)
		return (1);
	return (0);
}