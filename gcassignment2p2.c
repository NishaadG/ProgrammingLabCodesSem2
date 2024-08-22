//Write a program to perform subtraction of two matrices

#include <stdio.h>
int main(){
    int row , column , i , j ;
    printf("Enter number of rows :");
    scanf("%d" , &row);
    printf("Enter number of columns : ");
    scanf("%d" , &column);
    int a[row][column];
    int b[row][column];
    int sum[row][column];
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            printf("Enter element at row %d , column %d of matrix 1 :" ,i+1 , j+1 );
            scanf("%d",&a[i][j]);
        }
        
    }
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            printf("Enter element at row %d , column %d of matrix 2 :" ,i+1 , j+1 );
            scanf("%d",&b[i][j]);
        }
        
    }
    printf("Their Difference: \n");
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            sum[i][j]=a[i][j]-b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
}
