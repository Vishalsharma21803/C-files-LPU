#include <stdio.h>
int main(){
	int a,b;
	printf("Enter a and b(put a space between them): ");
	scanf("%d %d",&a,&b);
    /* comparing the numbers */
	if(a>b){
		printf("a is greater than b");
	}
	else if(a==b){
		printf("a is equal to b");
	}
	else{
		printf("b is greater than a");
	}
	return 0;
}
