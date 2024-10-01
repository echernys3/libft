#include "libft.h"
//size_t à ajouter dans header
void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned int	i;
	unsigned char	*dest;

	i = 0;
	dest = (unsigned char *)ptr;
	while (i < n)
		dest[i++] = (unsigned char)x;
	ptr = (void *)dest;
	return (ptr);
}