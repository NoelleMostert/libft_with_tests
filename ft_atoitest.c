#include <stdio.h>
#include "libft.h"

int main (int ac, char **av)
{
	int i;

	i = 1;
	
	if (ac > 1)
	{
		while (i < ac)
		{
			ft_putnbr(ft_atoi(av[i]));
			i++;
		}
	}

   return(0);
}
