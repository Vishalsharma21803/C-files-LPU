#include <stdio.h>
int main(){
	int v;
	printf("Enter the number: ");
	scanf("%d",&v);
	if (v<10){
		printf("number is less than 10");
	}
	else if (v==10){
		printf("number is equal to 10");
	}
	else{
		printf("number is greater than 10");
	}
	
	return 0;
}
