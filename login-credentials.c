
#include <stdio.h>

int main()
{
   int ID,pass;
   printf("enter user ID:");
   scanf("%d",&ID);
   if(ID!=101)
   printf("user not found");
   else
       {
        printf("enter password:");
        scanf("%d",&pass);
           if(pass!=4321)
           printf("incorrect password");
           else
           printf("Login successful");
        }
}
