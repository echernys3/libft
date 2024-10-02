#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	i;


	i = ft_strlen(s);
	if (c == '\0')
		return (&s[i]);
	while (i > 0)
	{
		if (s[i - 1] == c)
			return (&s[i - 1]);
		i--;
	}
	return NULL;
}