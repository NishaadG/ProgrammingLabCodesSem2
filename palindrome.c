#include <stdio.h>
#include <string.h>
int main(){
	char word[100];
	int len  , i;
	printf("Enter a word :") ;
   gets(word);
   len = strlen(word) ;
	for( i =0 ; i < len ; i++ ){
   	if(word[i]==word[len-1-i]){
   		
	   }
	else{
		break;
	}
   }
   if(i==len){
   	printf("%s is a palindrome" , word) ;
   }
   else{
   	printf("%s is not a palindrome" , word);
   }

   
   return 0;
	}

