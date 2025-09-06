//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
int armstrong(int a){
    int i,j=1,k=0;
    while(a > 0)
    {i = a%10;
    j = i*i*i;
    k += j;
    a = a/10;
    }
    return k;
}
int main(){
    int x;
    printf("enter a no. ");
    scanf("%d",&x);
    int y = armstrong(x);
    if (x==y)
        printf("it is  armstrong no. ");
    else 
    printf ("is is not armstrong no. ");
    return 0;
}