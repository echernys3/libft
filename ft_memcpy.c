#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*to;
	const unsigned char	*from;

	// if (!dest && !src)
	// 	return (0);
	i = 0;
	to = (unsigned char *)dest;
	from = (const unsigned char *)src;
	while (i < n)
	{
		to[i] = from[i];
		i++;
	}
	to [i] = '\0';
	return (dest);
}

// int main() 
// { 
//     char src[] = "mitochondria are the powerhouses of cells"; 
//     char dest[42];

// 	printf("\nBefore memcpy(): %s\n", src);
  
//     ft_memcpy(dest, src, 42*sizeof(char)); 
// 	// dest [20] = '\0';
  
//     printf("After memcpy():  %s", dest); 
//     return 0; 
// }