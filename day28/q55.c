//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include <stdio.h>
int main(){
int n,i,j,num=1;
printf("enter a number: ");
scanf("%d",&n);
if(n>1)
{
for(i=1;i<=n;i++)
{ 
    num=0;
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
        {
            num++;
        }
    }
    if(num==2)
    {
        printf("%d  ",i);
    }
}

}
return 0;
}