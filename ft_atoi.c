#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		sign;
	int		res;
	char	*ptr;

	i = 0;
	sign = 1;
	res = 0;
// CODER ft_isspace
	while (ft_isspace(nptr[i]) || nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i])
	{
		if (!(ft_isdigit(nptr[i])))
			return (0);
		res *= 10;
		res += (nptr[i] - '0');
	}
	return (res * sign);
}
