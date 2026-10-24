
#include <stdio.h>

int main()
{
  int type;
  float amount,discount=0,delivery=0,final;
  printf("\nEnter order amount:");
  scanf("%f",&amount);
  printf("\nEnter membership(1-premium,0-regular):");
  scanf("%d",&type);
  if(amount>=500)
     {
       if(type==1)
       discount=amount*10/100;
     }
   else
     delivery=50;
     
   final=amount-discount+delivery;
   printf("Final payable amount=%.2f",final);
  
  
}
