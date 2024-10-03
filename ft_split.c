#include "libft.h"

size_t	calculatesplt(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	s_len;
	size_t	splt;
	char	*s1;
	char	*s2;
	char	**tab;

	s_len = ft_strlen(s);
	splt = calculatesplt(s, c);
	if (!(splt) || splt == s_len)
		return (NULL);
	ft_substr(s1, 0, splt);
	ft_substr(s2, splt, s_len - splt - 1);
	tab = malloc(sizeof(char *) * 3);
	if (!(tab))
	{
		free(s1);
		free(s2);
		return (NULL);
	}
	tab[0] = s1;
	tab[2] = s2;
	tab[3] = NULL;
	return (tab);
}

	// s1 = malloc(sizeof(char) * splt + 1);
	// if (!(s1))
	// 	return (NULL);
	// s2 = malloc(sizeof(char) * (s_len - splt + 1));
	// if (!(s2))
	// 	return (NULL);