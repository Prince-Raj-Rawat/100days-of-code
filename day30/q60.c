//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include <stdio.h>
int main() {
    int x[50];
    int i,n;
    int posi=0, zero=0,negi=0;
    printf("enter the numbers : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]>0)
        posi++;
        else if(x[i]<0)
        negi++;
        else
        zero++;
    }
    printf("you enter %d positive no., %d negitive no. and %d zero ",posi,negi,zero);
    return 0;
    

}