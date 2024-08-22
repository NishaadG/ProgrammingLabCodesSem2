//C program to count upper case, lower case and special characters in a string.
#include <stdio.h>
int main(){
char str[100] ;
int i , upper=0 ,lower=0,character=0 ;
printf("Enter a string : ") ;
gets(str);
for(i=0;str[i];i++){
if((97<=str[i])&&(122>=str[i])){
lower++;
}
else if((65<=str[i])&&(96>=str[i])){
upper++;
}
else{
character++;
}
}
printf("Uppercase : %d\n" ,upper );
printf("Lowercase : %d\n",lower);
printf("Special Characters : %d" , character);
}

