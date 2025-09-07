//Q35: Write a program to print all factors of a given number.



#include <stdio.h>
#include <math.h>
void factors_of_number(int a){
    int x;
    
    for (x=1; x<=(a);x++)
      { 
        if((a%x)==0)
       {
        printf("%d ",x);
           
       }
        }          
       }


int main() {
    int p;
    printf("enter a number: ");
    scanf("%d",&p);
    factors_of_number(p);
    return 0;


}