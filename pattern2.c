#include <stdio.h>
int main(){
	int n , i , j ;
	printf("Enter a number :");
	scanf("%d",&n);
	for(i=n;i>0;i--){
		for(j=0;j<n-i;j++){
			printf("  ",n-j);
		}
		for(j=0;j<(2*i-1);j++){
			printf("%d ",i);
		}
		for(j=n;j>i;j--){
			printf("  ",n+i-j+1);
		}
		printf("\n");
	}

	return 0 ;
}
