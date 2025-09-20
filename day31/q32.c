//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>
int main(){
int x[50] ,y[50];
int i,n;
printf("enter the amount of no. you want to enter: ");
scanf("%d",&n);
for (i=0;i<n;i++)
{   printf("enter no %d: ",i );
    scanf("%d",&x[i]);
}
for(i=0;i<n;i++)
{
    y[i]=x[n-1-i];
    printf("%d  ",y[i]);

}


}