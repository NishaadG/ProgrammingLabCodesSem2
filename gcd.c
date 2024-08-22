#include <stdio.h>
int main(){
	int num1 , num2 , i , gcd =1;
	printf("Enter two numbers : ");
	scanf("%d%d" , &num1 , &num2);
	i=1 ;
	while(num1>=i){
		if(num1%i==0&&num2%i==0){
			gcd=i;
		}
		i++;
	}
	printf("Their gcd is %d" , gcd);
	return 0 ;
}
	
	
