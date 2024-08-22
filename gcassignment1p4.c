//C program to find second largest element in a one dimensional array
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
printf("Second maximum is %d",max2);
return 0;
}
