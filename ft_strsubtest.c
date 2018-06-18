#include <stdio.h>
#include "libft.h"

int main(int argc, char **argv)
{
	unsigned int a;
	size_t len;

	a = (unsigned int)ft_atoi(argv[2]);
	len = (size_t)ft_atoi(argv[3]);

	if(argc == 4)
		printf("%s\n", ft_strsub(argv[1], a, len));
	return 0;
}
