#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char 			*str;
	unsigned int	str_len;
	unsigned int	index;

	if (!(s))
		return (NULL);
	str_len = ft_strlen(s);
	str = malloc(sizeof(char) * (str_len + 1));
	if (!(str))
		return (NULL);
	index = 0;
	while (s[index])
	{
		str[index] = (*f)(index, s[index]);
		index++;
	}
	str[str_len] = '\0';
	return (str);
}
