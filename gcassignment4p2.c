//C program to count digits of a number using recursion
#include <stdio.h>
int noofdigits(int n){
	static int dig=0;
	if(n){
		noofdigits(n/10);
		dig++;
	}
	else{
		return dig;
	}
}
int main(){
	int num ;
	printf("Enter a number : ");
	scanf("%d" , &num);
	printf("%d" , noofdigits(num));
}
