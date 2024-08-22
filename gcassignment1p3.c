//  C program to find two largest elements in a one dimensional array

#include <stdio.h>
int main(){
	int n , i , max1,max2;
	printf("Enter no of elements in an array: ");
	scanf("%d" , &n);
	int arr[n];
	max1=0;
	max2=0;
	for(i=0 ; n > i ; i++){
		printf("Enter element number %d : " , i+1);
		scanf("%d" , &arr[i]);
		if(arr[i]>max1){
			max2=max1;
			max1=arr[i];
		}
	}
printf("Maximum is %d second maximum is %d",max1,max2);
return 0;
}
	
