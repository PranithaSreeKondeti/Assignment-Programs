
#include <stdio.h>

int main()
{
 int age;
 int income;
 float credits;
 printf("enter age:");
 scanf("%d",&age);
 if(age<21||age>60)
 printf("loan rejected:age is not between 21 to 60");
 else
     {
      printf("enter monthly income:");
      scanf("%d",&income);
        if(income<25000)
        printf("loan rejected:income is below 25000");
        else
        {
        printf("enter credit score:");
        scanf("%f",&credits);
           if(credits<700)
           printf("loan rejected:credit score is below 700");
           else
           printf("loan approved");
        }
     }
}