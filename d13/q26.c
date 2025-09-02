//Q26: Write a program to print numbers from 1 to n.

#include <stdio.h>
int n_number_loop(int i) {
    
     for (int x=1;x<=i;x++)
 {    printf("%d \n",x);
}
return 0;
}

int main(){
    int y;
    printf("enter a no.: ");
    scanf("%d",&y);
   n_number_loop(y) ;
   return 0;


}
