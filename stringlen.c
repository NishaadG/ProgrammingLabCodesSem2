#include <stdio.h>
int main(){
	char str1[100] ;
	int i = 0, count ;
	printf("Enter a string : ");
	gets(str1);
	while(str1[i]){
		count++ ;
		i++ ;
	}
	printf("Length of the string is : %d" , count);
}
