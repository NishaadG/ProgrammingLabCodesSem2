//C program to find nearest lesser and greater element in an array
int main(){
	int n , i , max,min,greater,lesser,num;
	printf("Enter no of elements in an array: ");
	scanf("%d" , &n);
	int arr[n];
	max=0;
	printf("Enter number to find greater and lesser of : ");
	scanf("%d",&num);
	for(i=0 ; n > i ; i++){
		printf("Enter element number %d : " , i+1);
		scanf("%d" , &arr[i]);
		if(arr[i]>max){
			max=arr[i];
	}
}
	min=max;
	for(i=0;n>i;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	greater=max-num;
	lesser=num-min;
	for(i=0;n>i;i++){
		if(((arr[i]-num)<(greater))&&((arr[i]-num)>0)&&(arr[i]-num!=0)){
			greater=arr[i]-num;
		}
		if(((num-arr[i])<(lesser))&&((num-arr[i])>0)&&(arr[i]-num!=0)){
			lesser=num-arr[i];
		}
	}
	printf("Lessser number is %d , greater number is %d" , num-lesser ,num+greater);
}
