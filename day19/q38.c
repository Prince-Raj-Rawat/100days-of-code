//Q38: Write a program to find the sum of digits of a number.



#include <stdio.h>
int sum(int a){
    int i,j=0;
    while((a!=0))
    {
        i=a%10;
        j+=i;
        a/=10;
    }
    return j;
}

int main(){
    int x,y;
    printf("enter a no.: ");
    scanf("%d",&x);
    y=sum(x);
    printf("%d",y);
    return 0;
}