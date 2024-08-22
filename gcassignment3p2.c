//Write C program to find maximum of four integers by defining function
#include <stdio.h>
void maxof(int a , int b, int c , int d){
	int max ;
	if(a>b&&a>c&&a>d){
		max=a;
	}
	else if(b>a&&b>c&&b>d){
		max=b;
	}
	else if (c>b&&c>a&&c>d){
		max=c;
	}
	else{
		max=d;
	}
	printf("%d is the greatest ",max);
}
int main(){
	int a,b,c,d;
	printf("Enter four integers");
	scanf("%d %d %d %d" , &a ,&b,&c,&d);
	maxof(a,b,c,d);
}
