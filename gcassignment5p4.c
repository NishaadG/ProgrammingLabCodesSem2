// C program to remove alphabets from an alphanumeric string
#include <stdio.h>
#include <string.h>
int main(){
char str[100] , onlynum[100];
int i ,k=0 ;
printf("Enter a string : \n") ;
gets(str);
for(i=0; str[i]!='\0';i++){
	printf("%c",str[i]);
if((0==str[i])||(str[i]==2)||(str[i]==3)||(str[i]==4)||(str[i]==5)||(str[i]==6)||(str[i]==7)||(str[i]==8)||(str[i]==9)){
onlynum[k]=str[i];
k++;
}
}
printf("String without alphabets : %s\n",onlynum);
}

