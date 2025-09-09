//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000
*/


#include <stdio.h>
int complement_of_binary(int a){
    int x=0,y=1;
    for (a;a>0;a/=10)
       { if(a%10 == 1)
         x=x+(0*y);
         else
         x=x+(1*y);

         y*=10;
        }
         printf("%d",x);
         return x;

}
int main(){
    int y;
    printf("Enter a no.: ");
    scanf("%d",&y);
    complement_of_binary(y);

}