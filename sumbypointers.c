#include <stdio.h>
void sumbyref(int *x,int *y,int*sum){
	*sum=*x+*y;
}
int main(){
	int x,y,sum;
	printf("Enter 2 numbers  : " );
	scanf("%d %d" , &x, &y);
	sumbyref(&x,&y,&sum);
	printf("Sum of the two numbers using pointers is : %d " ,sum);
}
