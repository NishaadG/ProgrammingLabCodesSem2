#include <stdio.h>
#include <string.h>
int main(){
	char str1[100],str2[100];
	int n;
	printf("Enter a string 1 : ");
	gets(str1);
	printf("Enter a string 2 : ");
	gets(str2);
	printf("Enter 1 for string length \nEnter 2 for string Concatenation\nEnter 3 for String Copy\nEnter 4 for string reverse\n");
	scanf("%d",&n);
	if(n==1){
		int len1,len2 ;
		len1=strlen(str1);
		len2=strlen(str2);
		printf("Length of string 1 is %d",len1);
		printf("\nLength of string 1 is %d",len2);
	}
	else if(n==2){
		printf("String before concatenation : %s" , str1);
		strcat(str1 , str2);
		printf("\nConcatenated string is %s" , str1);
	}
	else if(n==3){
		printf("String before copy : %s",str1);
		strcpy(str1,str2);
		printf("\nString after copy : %s" ,str1);
	}
	else if(n==4){
		printf("String 1 before rev : %s\n",str1);
		printf("\nString 2 before rev : %s\n",str2);
		strrev(str2);
		strrev(str1);
		printf("String 1 after rev : %s\n",str1);
		printf("\n\String 2 after rev : %s\n",str2);
	}
	else{
		printf("Invalid input number");
	}
}

