//Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
#include <stdio.h>
int main(){
int n,i;
printf("enter the amount of no u wanna enter: ");
scanf("%d",&n);
int x[50];
for(i=1;i<=n;i++)
    {
    scanf("%d ",&x[i]);
    }
for(i=1;i<=n;i++)
    {
        printf("%d ",x[i]);
    }

}