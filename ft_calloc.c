#include "libft.h"
#include <stdlib.h>

void	*calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (!nmemb || !size)
		return (NULL);
	if (nmemb > SIZE_MAX / size) // j'ai le droit au SIZE_MAX????? + division pour eviter le overflow en multipliant
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!(ptr))
		return (NULL);
	ft_memset(ptr, '\0', nmemb * size);
	return (ptr);
}
