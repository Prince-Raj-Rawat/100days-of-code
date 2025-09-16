/*Q54: Write a program to print the following pattern:

*

***

*****
*******
***

*


*/


#include <stdio.h>
int main() {
int i,n,brow,star;
printf("enter a odd number: ");
scanf("%d",&n);
brow=(n+1)/2;
if(n%2!=0)
{
if (brow%2!=0)
{
    for(i=1;i<=n;i++)
    {
        if(i%2!=0 && i<=brow)
        {   printf("\n");
            for(star=1;star<=i && i<=brow;star++)
            {
                 printf("*");
            }
            printf("\n");
        }   
        for(star=1;star<=brow+2 && i==brow+1;star++)
         {
             printf("*");
         }
        if(i%2!=0 && i>brow+1)
        {
            printf("\n");
            for(star=0;star<=n-i;star++)
            {
               printf("*");
            }
        printf("\n");
        }
        
        
    }
   
}
else
{
      for(i=1;i<=n;i++)
    {
        if(i%2!=0 && i<brow)
        {   printf("\n");
            for(star=1;star<=i && i<brow;star++)
            {
                 printf("*");
            }
            printf("\n");
        }   
        for(star=1;star<=brow+2 && i==brow;star++)
         {
             printf("*");
         }
        if(i%2!=0 && i>brow)
        {
            printf("\n");
            for(star=0;star<=n-i;star++)
            {
               printf("*");
            }
        printf("\n");
        }
        
        
    }




}
}

else
printf("invalid no. please enter a odd number");

return 0;


}