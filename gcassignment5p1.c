// C program to print all VOWEL and CONSONANT characters separately.
#include <stdio.h>
#include <string.h>
int main(){
char str[100] , vowels[100] , consonants[100];
int i , j=0 ,k=0 ;
printf("Enter a string : ") ;
gets(str);
for(i=0; str[i];i++){
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
vowels[j]=str[i];
j++;
}
else{
consonants[k]=str[i];
k++;
}
}
printf("Consonant string : %s\n",consonants);
printf("Vowel string : %s",vowels);
}

