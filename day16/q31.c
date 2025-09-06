//Q31: Write a program to take a number as input and print its equivalent binary representation.


#include <stdio.h>
int binary_conversion(int b){
        int c,d=0,e=1;
        while(b>0)
           { if (b%2==0)
            c=0;
            else 
            c=1;
        b=b/2;
        d=(d+(c*e));
        e*=10;
        }
    return d;
            
}

int main() {
int i;
printf("enter a number: ");
scanf("%d",&i);
int j=binary_conversion(i);
printf("%d",j);
return 0;
}