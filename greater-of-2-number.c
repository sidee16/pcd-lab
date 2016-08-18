#include <stdio.h>
int main ()
{
   int a,b;
   
    printf("enter any two no:\n");
    scanf("%d%d", &a, &b);
      if (a>b)
         printf("greatest of both is: %d \n", a);
      else
         printf("greatest of both is: %d \n", b);
     return 0;      
}
