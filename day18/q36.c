//Q36: Write a program to find the HCF (GCD) of two numbers.



#include <stdio.h>


int hcf(int a,int b){
int x,y=1;
 for (x=1 ;x<=a;x++)
{  if (((a%x)==0)&&(b%x)==0)
        {
            if(y<a)
            y=x;
        }
    }
return y;
}
int main(){
int p,q;
printf("enter two numbers: ");
scanf("%d %d",&p,&q);
int r = hcf(p,q);
printf ("the hcf of %d and %d is %d\n",p,q,r);
return 0;



}
  




