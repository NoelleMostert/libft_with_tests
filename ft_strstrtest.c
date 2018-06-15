#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{

	if (argc == 3)
	{
		ft_putstr(ft_strstr(argv[1], argv[2]));
	}
	return (0);
}
