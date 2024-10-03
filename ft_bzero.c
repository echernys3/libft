#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*dest;

	i = 0;
	dest = (unsigned char *)s;
	while (i < n)
		dest[i++] = '\0';
}

// #include <stdio.h>
// int main() 
// { 
//     char str[50] = "GeeksForGeeks is for programming geeks."; 
//     printf("\nBefore memset(): %s\n", str);
// 
//     ft_bzero(str + 13, 8*sizeof(char)); 
// 
//     printf("After memset():  %s", str + 22); 
//     return 0; 
// }