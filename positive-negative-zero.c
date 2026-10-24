
#include <stdio.h>

int main()
{  
 int n;
 printf("enter n value: ");
 scanf("%d",&n);
 if(n>0)
 printf("\n %d is positive",n);
 else
     if(n<0)
     printf("\n %d is negative",n);
     else 
     printf("\n %d is zero",n);
    return 0;
}