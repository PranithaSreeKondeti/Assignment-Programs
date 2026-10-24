
#include <stdio.h>

int main()
{
    float weight,height,BMI;
    printf("Enter Body weight of person in kg: ");
    scanf("%f",&weight);
    printf("Enter height in meters:");
    scanf("%f",&height);
    BMI=weight/(height*height);
    printf("BMI=%f",BMI);
    if(BMI<18.5)
    printf("\nUnderweight");
    else 
       if(BMI<25)
       printf("\nNormal");
       else
         if(BMI<30)
         printf("\nOverweight");
         else
         printf("\nObese");
    
}
