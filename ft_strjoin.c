#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2);
{
	char	*newstr;
	size_t	i;
	size_t	j;
	size_t	tot_len;

	tot_len = ft_strlen(s1) + ft_strlen(s2);
	newstr = malloc(sizeof(char) * (tot_len + 1));
	if (!(newstr))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	ft_memmove(newstr + i, s2, ft_strlen(s2));
	return (newstr);
}