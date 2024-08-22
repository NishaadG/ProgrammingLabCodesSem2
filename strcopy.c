#include <stdio.h>
int main(){
	char s1[100] , s2[100] ;
	printf("Enter a string : ");
	gets(s1);
	int i =0 ;
	printf("s2 before copying : %s\n" ,s2);
	while(s1[i]){
		s2[i]=s1[i];
		i++;
	}
	printf("s2 after copying : %s" , s2);
}
