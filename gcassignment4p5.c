//C program to check a given number is prime or not using recursion
#include <stdio.h>
void prime(int num , int i){
	if(i==1){
		printf("Prime");
	}
	else if((num%i==0)&&(i!=num)){
		printf("Not prime");
	}
	else{
		prime(num,i-1);
	}
}
int main(){
	int num ;
	printf("Enter a number : ");
	scanf("%d" , &num);
	prime(num,num);
}
