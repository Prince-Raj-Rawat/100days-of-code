/*Q54: Write a program to print the following pattern:

*
/
***
/
*****
*******
***
/
*


*/
/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include <stdio.h>
int main() {
int i,n,brow,star;
printf("enter a odd number: ");
scanf("%d",&n);
brow=(n+1)/2;
if(brow%2 !=0)
{
if(n%2!=0)
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
}
else if (brow%2==0)
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

else
printf("invalid no.");

return 0;
}

