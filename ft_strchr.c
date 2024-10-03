#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*ptr;
	unsigned int	i;

	ptr = s;
	i = 0;
	while (s[i] != c && s[i])
		i++;
	if (!(s[i]))
		return (NULL);
	return (ptr + i);
}
