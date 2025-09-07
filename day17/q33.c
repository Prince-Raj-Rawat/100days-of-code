//Q33: Write a program to check if a number is an Armstrong number.


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