#include <stdio.h>
void sum_of_odd_numbers(int n){
    int x,y=1,z=0;
    for (x=1; x<=n;x++)
    {
        z += y;
        y += 2;
    }
    printf("the sum of first %d odd number is: %d ",n,z);
}
int main() {
int i;
printf("enter value for n: ");
scanf("%d",&i);
sum_of_odd_numbers(i);
return 0;

