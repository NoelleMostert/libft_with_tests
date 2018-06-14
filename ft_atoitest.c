#include <stdio.h>
#include "libft.h"

int main ()
{
   int val;
   char str[20];

   
   strcpy(str, "ab123");
   val = ft_atoi(str);
   printf("My atoi string value = %s, My atoi int value = %d\n", str, val);

   strcpy(str, "ab123");
   val = atoi(str);
   printf("Lib string value = %s, Lib int value = %d\n", str, val);

   return(0);
}
