#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main () {
   int var1 = 'K';
   int var2 = '8';
   int var3 = '\t';
   int var4 = ' ';

   if( isupper(var1) ) {
      printf("var1 = |%c| can be printed\n", var1 );
   } else {
      printf("var1 = |%c| can't be printed\n", var1 );
   }

   if( isupper(var2) ) {
      printf("var2 = |%c| can be printed\n", var2 );
   } else {
      printf("var2 = |%c| can't be printed\n", var2 );
   }

   if( isupper(var3) ) {
      printf("var3 = |%c| can be printed\n", var3 );
   } else {
      printf("var3 = |%c| can't be printed\n", var3 );
   }

   if( isupper(var4) ) {
      printf("var4 = |%c| can be printed\n", var4 );
   } else {
      printf("var4 = |%c| can't be printed\n", var4 );
   }

   if(ft_isupper(var1) ) {
      printf("var1 = |%c| my function can be printed\n", var1 );
   } else {
      printf("var1 = |%c| my function can't be printed\n", var1 );
   }

   if(ft_isupper(var2) ) {
      printf("var2 = |%c| my function can be printed\n", var2 );
   } else {
      printf("var2 = |%c| my function can't be printed\n", var2 );
   }

   if(ft_isupper(var3) ) {
      printf("var3 = |%c| my function can be printed\n", var3 );
   } else {
      printf("var3 = |%c| my function can't be printed\n", var3 );
   }

   if(ft_isupper(var4) ) {
      printf("var4 = |%c| my function can be printed\n", var4 );
   } else {
      printf("var4 = |%c| my function can't be printed\n", var4 );
   }

   return(0);
}
