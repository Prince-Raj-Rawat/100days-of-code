//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>
int main (){
    int matrix_1[50][50]={0};
    int i, j,k , col, row;
    printf("enter the amount of rows and column for marix 1: ");
    scanf("%d %d",&row ,&col);
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&matrix_1[i][j]);
        }
    }

    int matrix_2[50][50]={0};
    int col2,row2;
    printf("enter the amount of rows and column for martix2: ");
    scanf("%d %d",&row2,&col2);
    
if (col!=row2)
    {
        printf("the multiplication of these matrices cant be done!! please try again with another martix!!");
        return 0;
    }
else{   
    int mult[50][50]={0};
        for (i=0;i<row2;i++){
            for(j=0;j<col2;j++){
                scanf("%d",&matrix_2[i][j]);
            }
        }


        for(i=0;i<row;i++){
            for(j=0;j<col2;j++){
                for(k=0;k<col;k++){
                mult[i][j]+=matrix_1[i][k]*matrix_2[k][j];
                
                }
                printf("%d  ",mult[i][j]);
            }
            printf("\n");
        }

    }
}


  