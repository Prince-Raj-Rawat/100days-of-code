//Q34: Write a program to check if a number is prime.



 #include <stdio.h>
 void check_prime (int a){
    int i ,j ,k;
    if (a <= 1)
    printf("not a prime no. \n");
    else 
    {
        for (i =2 ; i <= (a -1);a++)
        {   
            if ((a%i)==0)
           { printf("it is not a prime no. "); 
            break;}
            else
            printf("it is a prime no. ");
            break;
        }
      
    }
 }
 int main() {
    int x;
    printf("enter a no. ");
    scanf("%d",&x);
    check_prime (x);
    return 0;


 }