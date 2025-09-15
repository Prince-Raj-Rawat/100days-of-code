//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>
int main (){
int num,den,i,n;
float sum=0;
printf("enter a value for n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    num=i*2;
    den=(i*4)-1;
    sum=sum+((float)num/den);

}

printf("%.2f",sum);

return 0;

}