#include <stdio.h>
int main(){
	int n=10;
// even if the condition is false the loop will execute one time and if the statement is true them the loop will execute completely
	do{
		printf("\n%d",n);
		n=n-1;
	}while(n>0);
	return 0;
}

