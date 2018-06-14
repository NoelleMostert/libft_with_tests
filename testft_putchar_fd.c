#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

int	main(void)
{
	int fd = open("test1.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);

	ft_putchar_fd('R', fd);

	close(fd);
	return (0);
}
