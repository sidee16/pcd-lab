#include <stdio.h>
int main()
{
  int a,b,c;
  printf("enter three number");
  scanf("%d%d%d", &a, &b, &c);
  
  if(a>b)
       if (a>c)
       printf("greatest of the three is: %d", a);
       else
       printf("greatest of the three is: %d", c);
  else if(b>c)
  printf("greatest of the three is: %d", b);
  else
  printf("greatest of the three is: %d", c);
  return 0;
}  
