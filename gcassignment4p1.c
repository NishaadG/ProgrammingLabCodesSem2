// C program to find factorial of a number using recursion
#include <stdio.h>
int fact(int n){
	if(n==1){
		return 1;
	}
	else{
	n=n*fact(n-1);
	return n;
	}
}
int main(){
	int num ;
	printf("Enter a number to find factorial of : ");
	scanf("%d" , &num);
	printf("Its factorial is : %d" ,fact(num));
}
