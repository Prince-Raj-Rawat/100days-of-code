//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>
int main(){
    int x[50][50]={0};
    int y[50][50]={0};
    int z[50][50]={0};
    int i,j,col,row;

//taking rows and comlumn value
    printf("enter the amount of rows and column: ");
    scanf("%d %d ",&row,&col);
    
    //enter no  in the array
     for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        scanf("%d",&x[i][j]);
    }
    printf("\n\n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        printf("%4d ",x[i][j]);
        printf("\n");
    }
    printf("\n\n");

        //enter no  in the array
     for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        scanf("%d",&y[i][j]);
    }
    printf("\n\n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        printf("%4d ",y[i][j]);
        printf("\n");
    }
    printf("\n\n");

     for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
        z[i][j]=x[i][j]+y[i][j];
        printf("%4d ",z[i][j]);
        }
        printf("\n");
        
    }

}