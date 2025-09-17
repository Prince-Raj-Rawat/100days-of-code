//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

#include <stdio.h>
int main(){
    int x[100];
    int i,n,min,max;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
max=x[0],min=x[0];
    for(i=1;i<n;i++)
    {
        if(max<x[i])
        max=x[i];
        if(min>x[i])
        min=x[i];

    }
printf("max is %d \nmin is %d",max,min);

}