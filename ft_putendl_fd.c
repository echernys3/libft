#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
// 
// int	main()
// {
// 	char	str[] = "Mitochondria is the pow..";
// 	ft_putendl_fd(str, 1);
// }