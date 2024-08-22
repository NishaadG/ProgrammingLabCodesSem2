//C program to read a matrix and print it's diagonal element
#include <stdio.h>
int main(){
    int row , column , i , j ;
    printf("Enter number of rows :");
    scanf("%d" , &row);
    printf("Enter number of columns : ");
    scanf("%d" , &column);
    int a[row][column];
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            printf("Enter element at row %d , column %d of matrix :" ,i+1 , j+1 );
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Diagonal Elements: \n");
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            if(i==j){
                printf("%d ",a[i][j]);
            }
        }
    }
    
}
