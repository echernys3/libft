#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;
	size_t	s_len;

	s2 = malloc(sizeof(char) * (len + 1));
	if (!(s2))
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	if (s_len < start)
	{
		s2[i] = '\0';
		return (s2);
	}
	while (s2[i] && s[i + start] && i < len)
	{
		s2[i] = s[i + start];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
