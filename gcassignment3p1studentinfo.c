//Write C program using User define function example with no argument and no return type
#include <stdio.h>
void info(){
	char name[100];
	int rollno ;
	float cgpa ;
	long long int phonenum;
	printf("Enter name : ");
	gets(name);
	printf("Enter roll no : ");
	scanf("%d",&rollno);
	printf("Enter cgpa : ");
	scanf("%f",&cgpa);
	printf("Enter phone number : ");
	scanf("%lld" , &phonenum);
	printf("Name : %s\nRoll no : %d\nCGPA : %f\nPhone number : %lld",name,rollno,cgpa,phonenum);	
}
int main(){
	info();
}
