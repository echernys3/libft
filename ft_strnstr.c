#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j; 

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (j < len && big[j + i])
	{
		i = 0;
		if (little[0] == big[j])
		{
			while ((j + i) < len && little[i] == big [j + i] && little [i])
				i++;
			if (!(little[i]))
				return ((char *)(big + j));
		}
		j++;
	}
	return (NULL);
}

// int main()
// {
//     const char *big = "Hello, world!";
//     const char *little1 = "world";
//     const char *little2 = "test";
//     const char *little3 = ""; // Test with empty string
//     size_t len = 13; // Length of `big`

//     // Test case: normal match
//     char *result1 = ft_strnstr(big, little1, len);
//     if (result1) {
//         printf("Found '%s' in '%s': %s\n", little1, big, result1);
//     } else {
//         printf("'%s' not found in '%s'\n", little1, big);
//     }

//     // Test case: no match
//     char *result2 = ft_strnstr(big, little2, len);
//     if (result2) {
//         printf("Found '%s' in '%s': %s\n", little2, big, result2);
//     } else {
//         printf("'%s' not found in '%s'\n", little2, big);
//     }

//     // Test case: empty little
//     char *result3 = ft_strnstr(big, little3, len);
//     if (result3) {
//         printf("Found empty string in '%s': %s\n", big, result3);
//     } else {
//         printf("Empty string not found in '%s'\n", big);
//     }

//     // Test case: boundary condition
//     char *result4 = ft_strnstr(big, little1, 5); // Should not find "world" within the first 5 characters
//     if (result4) {
//         printf("Found '%s' in '%s': %s\n", little1, big, result4);
//     } else {
//         printf("'%s' not found in first 5 characters of '%s'\n", little1, big);
//     }
// }