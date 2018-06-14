#include <fcntl.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	int fd = open("test2.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
	
	ft_putendl_fd("Harro\n", fd);

	close(fd);
	return (0);
}
