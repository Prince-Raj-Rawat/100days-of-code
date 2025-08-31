//Q16: Write a program to input three numbers and find the largest among them using if–else.


#include <stdio.h>
int main() {
    int a ,b ,c;
    printf ("enter a number : ");
    scanf("%d",&a);
    printf("enter another number : ");
    scanf("%d",&b);
    printf("enter a number again : ");
    scanf("%d",&c);
    if(a>b&&a>c)
    printf("%d is the largest number");
    else if(b>a&&b>c)
    printf("%d is the largest number");
    else if(c>a&&c>b)
    printf("%d is the largest number");
    else 
{    int d = (a==b)?((a==c)?1:2):((b==c)?3:4);
if (d==1)
printf("all three no. are equal");
else if (d==2)
printf("first and second numbers are equal");
else if (d==3)
printf("second and thrid numbers are equal");
else 
printf("first and third no. are equal");

}

return 0;
}