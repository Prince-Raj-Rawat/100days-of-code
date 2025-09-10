//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include <stdio.h>

int factors_of_number(int a){
    int x,y=0;
    
    for (x=1; x<(a);x++)
      { 
        if((a%x)==0)
       {
        y+=x;
           
       }
        }  
        return y;        
       }

int main(){
    int a,b;
    printf("enter a number: ");
    scanf("%d",&a);
    b=factors_of_number(a);
    if(a==b)
    printf("%d is a perfect number.",a);
    else 
    printf("%d is not a perfect number.",a);

    return 0;


}