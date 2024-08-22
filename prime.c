#include <stdio.h>
int main()
{
	int num , i ;
	printf("Enter a number :\n");
	scanf("%d",&num);
	if(num==0||num==1){
		printf("it is neither prime nor composite");
	}
	for( i = 2 ; i<num ; i++){
		if(num%i==0){
			printf("%d is not a prime number",num);
			break;
		}
	}
	if(i==num){
		printf("%d is a prime number",num);
	}
	return 0;
}
