//Write a program in C to find the maximum number between two numbers using a pointer.
#include <stdio.h>
void maxnum(int *x , int *y ,int *max){
	if(*x>*y){
		*max=*x;
	}
	else{
		*max=*y;
	}
}
int main(){
	int x,y,max;
	printf("Enter 2 numbers  : " );
	scanf("%d %d" , &x, &y);
	maxnum(&x,&y,&max);
	printf("The maximum number is %d",max);
}
