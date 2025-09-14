/*Q50: Write a program to print the following pattern:
*****
  ****
    ***
      **
        * */

/*
Sample Test Cases:
Input 1:

Output 1:
*****
  ****
    ***
      **
        *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include <stdio.h>
int main(){
int row;
printf("enter tehe no. of rows: ");
scanf("%d",&row);

for (int i =1;i<=row;i++)
{
  for(int j=i; j<(2*i-1);j++)
  printf("  ");
  for (int k=0;k<=(row-i);k++)
  printf("*");

  printf("\n");
}





}