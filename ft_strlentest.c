#include <stdio.h>
#include "libft.h"

int main(int argc, const char **argv)
{
	int i;

	i = 1;

	if (argc > 1)
			ft_putnbr(ft_strlen(argv[i]));
	else
		return (-1);

	return (0);
}
