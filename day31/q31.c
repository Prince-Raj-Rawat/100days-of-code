//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include <stdio.h>
int main(){
    int x[100];
    int i,n,num;
    printf("enter the amount of number you want to enter: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("enter a number: ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(x[i]==num)
        {printf("found at index %d",i);
            break;
    }
}
return 0;

}