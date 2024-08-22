#include <stdio.h>
int main(){
	int n , i , j ;
	printf("Enter a number :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			printf("  ",n-j );
		}
		for(j=0;j<(2*i-1)+2;j++){
			printf("%d ",i+1);
		}
		for(j=0;j<(n-i)-1;j++){
			printf("  ",i+j+2);
		}
		printf("\n");
	}
	
	return 0 ;
}
