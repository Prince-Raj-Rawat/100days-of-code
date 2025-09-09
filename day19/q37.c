//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>
int hcf(int a,int b){
int x,y=1;
 for (x=1 ;x<=a;x++)
{  if (((a%x)==0)&&(b%x)==0)
        {
            if(y<x)
            y=x;
        }
    }
return y;
}

int main(){
int p,q,r;
printf("enter two no.s : ");
scanf("%d %d",&p,&q);
r=hcf(p,q);
int lcm = (p*q)/r;
printf("%d",lcm);
return 0;
}







