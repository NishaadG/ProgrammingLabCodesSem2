//C program to calculate sum of all digits using recursion
#include <stdio.h>
int sumofdig(int n){
	static sum = 1;
	if(n){
		sum=sum+n%10;
		sumofdig(n/10);	
	}
	else{
		return sum ;
	}
}
int main(){
	int num ;
	printf("Enter a number : ");
	scanf("%d" , &num);
	printf("%d" , sumofdig(num));
}

