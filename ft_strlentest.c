#include <stdio.h>
#include "libft.h"

int main(int argc, const char **argv)
{
	int i;

	i = 1;

	if (argc > 1)
		while (i < argc)
		{
			ft_putstr(argv[i]);
			i++;
		}
	else
		return (-1);

	return (strlen(argv));
}
