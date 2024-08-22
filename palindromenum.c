#include <stdio.h>
int main()
{
	int num ,revnum=0 ,x;
	printf("Enter a number : ");
	scanf("%d" , &num);
	x=num;
	while(x){
		revnum=x%10+revnum*10;
		x=x/10;
	}
	printf("The reverse of the number is %d\n" , revnum);
	if(num==revnum){
		printf("The number is a palindrome");
	}
	else{
		printf("The number is not a palindrome");
	}
}
