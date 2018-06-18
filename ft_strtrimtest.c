#include <stdio.h>
#include "libft.h"

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_putstr(ft_strtrim(argv[1]));
	return (0);
}
