#include <stdio.h>
void squarebyref(int *x){
	*x=(*x)*(*x);
}
int main(){
	int x ;
	printf("Enter a number : ");
	scanf("%d",&x);
	squarebyref(&x);
	printf("Square of the number with pointers : %d",x);
}
