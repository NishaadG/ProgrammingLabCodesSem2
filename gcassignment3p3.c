//Write C program  o pass a one dimensional (1D) array to a function
#include <stdio.h>
void inc5(int *num,int n){
	int i ;
	for(i=0;i<n;i++){
		num[i]=num[i]+5;
	}
}
int main(){
	int n,i;
	printf("Enter number of elements in the array : ");
	scanf("%d" , &n);
	int arr[n] ;
	for(i=0;i<n;i++){
		printf("Enter element number number %d : " , i+1);
		scanf("%d",&arr[i]);
	}
	inc5(arr,n);
	printf("New array :");
	for(i=0;i<n;i++){
		printf("%d " ,arr[i]);
	}
}
