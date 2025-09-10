//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>
int swap(int x){
    int count=-1,a=x;
    int last_digit=(a%10),first_digit;
    while(a>0)
    {
        if(a/10==0)
        first_digit=(a);

        count++;
        a/=10;
    }
    first_digit=x/pow(10,count);
    int swaped_no=((x-((pow(10,count)*first_digit)+last_digit))+((pow(10,count)*last_digit)+first_digit));
    return swaped_no;

}
int main(){
    int a;
    printf("enter a no.: ");
    scanf("%d",&a);
    int b=swap(a);
    printf("%d",b);
    return 0;


}