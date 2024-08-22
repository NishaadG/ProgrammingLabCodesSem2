//C Program to remove all spaces from a given string in C
#include <stdio.h>
#include <string.h>
int main(){
char str[100] , nospaces[100];
int i ,k=0 ;
printf("Enter a string : ") ;
gets(str);
for(i=0; str[i];i++){
if(str[i]==' '){
}
else{
nospaces[k]=str[i];
k++;
}
}
printf("String without spaces : %s\n",nospaces);
}

