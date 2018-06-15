#include <stdio.h>
#include "libft.h"

int main ()
{
   void *mem = ft_memalloc(123456789);

   ft_memdel(&mem);
   if (mem == NULL)
	   printf("freed\n");
   else
	   printf("failed\n");
   return(0);
}
