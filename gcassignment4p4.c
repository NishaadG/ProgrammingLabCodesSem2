//C program to reverse an integer number using recursion
#include <stdio.h>
int revnum(int n){
	static int rev = 0;
	if(n){
		rev=rev*10+n%10;
		revnum(n/10);
	}
	else{
		return rev;
	}
}
int main() {
	int num ;
	printf("Enter a number : ");
	scanf("%d" , &num);
	printf("%d" , revnum(num));
}
