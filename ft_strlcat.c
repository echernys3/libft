#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;


	i = ft_strlen(dst);
	j = 0;
	if (size <= i)
		return(ft_strlen(src) + size);
	while (src[j] && j < size - ft_strlen(dst) - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (ft_strlen(src) + i);
}