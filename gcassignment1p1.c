//C program to swap first element with last, second to second last and so on (reversing elements)
#include <stdio.h>
int main(){
	int n , i , temp;
	printf("Enter no of elements in an array: ");
	scanf("%d" , &n);
	int arr[n];
	for(i=0 ; n > i ; i++){
		printf("Enter element number %d : " , i+1);
		scanf("%d" , &arr[i]);
	}
	for(i= 0 ; n/2>i ; i++){
		temp = arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	printf("Reversed array is : ");
	for(i=0; n>i ; i++){
		printf("%d  " , arr[i]);
	}
}

