#include <stdio.h>
int greater(int x , int y )
{
	int res ;
	res = x+y +abs(y-x) ;
	return res/2 ;
}

int main()


{
	int num1 , num2 ;
	printf("Enter two numbers :") ;
	scanf("%d %d" , &num1 ,&num2) ;
	printf("Greater number is %d" , greater(num1 , num2)) ;
	return 0;
}
