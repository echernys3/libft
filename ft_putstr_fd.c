#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	index;

	index = 0;
	while (s[index])
	{
		write(fd, &s[index], 1);
		index++;
	}
}
// 
// int	main()
// {
// 	char	str[] = "ABCDE";
// 	ft_putstr_fd(str, 1);
// }