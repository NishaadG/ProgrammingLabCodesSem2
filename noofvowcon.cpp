//count number of vowels and consonants in a string
#include <iostream>
using namespace std;
int main(){
	string str;
	cout<<"Enter a word : " <<endl;
	cin>>str;
	int con=0,vow=0 ;
	char *ptr;
	for(ptr=&str[0];*ptr!='\0';ptr++){
		*ptr=tolower(*ptr);
		if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'){
			vow+=1;
		}
		else if((97<=*ptr)&&(*ptr<=122)){
			con+=1;
		}
		else{
			continue;
		}
	}
	cout<<"Vowels : " <<vow<<endl;
	cout<<"Consonants : "<<con <<endl;
}
