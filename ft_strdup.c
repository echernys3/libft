#include "libft.h"

char	*strdup(const char *s)
{
	char 	*dup;
	size_t	s_len;
	size_t	count;

	count = 0;
	s_len = ft_strlen(s);
	if (!(s_len))
		return (NULL);
	dup = malloc(sizeof(char) * (s_len + 1));
	if (!(dup))
		return (NULL);
	while (s[count])
	{
		dup[count] = s[count];
		count++;
	}
	dup[count] = '\0';
	return (dup);
}