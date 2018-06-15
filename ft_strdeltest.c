#include <stdio.h>
#include "libft.h"

int				main(void)
{
	char 		*str = strdup("Hello world!\n");

	ft_strdel(&str);
	if (str == NULL)
		printf("freed\n");
	else
		printf("failed\n");
	return 0;
}
