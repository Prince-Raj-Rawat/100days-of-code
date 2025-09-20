//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

#include <stdio.h>
int main() {
    int x[50];
    int i,n;
    int even=0, odd=0;
    printf("enter the numbers : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]%2 == 0)
        even++;
        else
        odd++;
    }
    printf("you enter %d even no. and %d odd no.",even,odd);
    return 0;
    

}