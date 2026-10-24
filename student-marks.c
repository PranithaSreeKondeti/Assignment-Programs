
#include <stdio.h>

int main()
{
   int marks;
   printf("enter marks:");
   scanf("%d",&marks);
   if(marks<0||marks>100)
   printf("Invalid mark");
   else
       if(marks>=90)
       printf("grade O");
       else 
          if(marks>=80)
          printf("grade A+");
          else 
             if(marks>=70)
             printf("garde A");
             else
                if(marks>=60)
                printf("grade B");
                else
                   if(50<=marks>=59)
                   printf("grade C");
                   else
                   printf("fail");
}                   
               
            