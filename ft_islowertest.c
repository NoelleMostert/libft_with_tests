#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int var1 = 'k';
	int var2 = '\t';
	int var3 = '8';
	int var4 = ' ';
	int var5 = 'A';

	if (islower(var1))
		printf("var1 = |%c| can be printed\n", var1);
	else
		printf("var1 = |%c| can't be printed\n", var1);

	if (islower(var2))
		printf("var2 = |%c| can be printed\n", var2);
	else
		printf("var2 = |%c| can't be printed\n", var2);

	if (islower(var3))
		printf("var3 = |%c| can be printed\n", var3);
	else
		printf("var3 = |%c| can't be printed\n", var3);
	
	if (islower(var4))
		printf("var4 = |%c| can be printed\n", var4);
	else
		printf("var4 = |%c| can't be printed\n", var4);

	if (islower(var5))
		printf("var4 = |%c| can be printed\n", var5);
	else
		printf("var4 = |%c| can't be printed\n", var5);

	if (ft_islower(var1))
		printf("var1 = |%c| can be printed\n", var1);
	else
		printf("var1 = |%c| can't be printed\n", var1);

	if (ft_islower(var2))
		printf("var2 = |%c| can be printed\n", var2);
	else
		printf("var2 = |%c| can't be printed\n", var2);

	if (ft_islower(var3))
		printf("var3 = |%c| can be printed\n", var3);
	else
		printf("var3 = |%c| can't be printed\n", var3);

	if (ft_islower(var4))
		printf("var4 = |%c| can be printed\n", var4);
	else
		printf("var4 = |%c| can't be printed\n", var4);
	
	if (islower(var5))
		printf("var5 = |%c| can be printed\n", var5);
	else
		printf("var5 = |%c| can't be printed\n", var5);

	return (0);
}
