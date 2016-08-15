#include <stdio.h>
int main ()
{
   int a,b;
   
    printf("enter any two no:\n");
    scanf("%d%d%d",&a, &b);
      if (a>b)
         printf("greatest of both is: %d",a);
      else
         printf("greatest of both is: %d",b);
     return 0;      
}
