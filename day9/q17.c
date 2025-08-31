//Q17: Write a program to find the roots of a quadratic equation and categorize them.


#include <stdio.h>
#include <math.h>
int main(){
int a ,b ,c ,d , x, y;
printf("enter the cofficients :");
scanf("%d %d %d",&a,&b,&c);
d = ((b*b)-4*(a*c));
if (d>0)
{x=(-b - sqrt(d))/(2*a);
y=(-b  +sqrt(d))/(2*a);
printf("roots are real and distinct \n");
printf("%d & %d",x,y);}
else if(d==0)
{x=(-b/(2*a));
    printf("root is real  \n");
    printf("%d",x);
}
 else
 printf("roots are complex");

return 0;

}