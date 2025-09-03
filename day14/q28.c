//Q28: Write a program to print the product of even numbers from 1 to n.


#include <stdio.h>
void product_of_even_numbers(int n){
    int x,y=2,z=1;
    for (x=1; x<=n;x++)
    {
        z *= y;
        y += 2;
    }
    printf("the product of first %d even number is: %d ",n,z);
}
int main() {
int i;
printf("enter value for n: ");
scanf("%d",&i);
product_of_even_numbers(i);
return 0;
}
