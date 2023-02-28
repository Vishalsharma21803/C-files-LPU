#include <stdio.h>
int main(){
	int x;
	printf("enter a number: ");
	scanf("%d",&x);
	if (x%2==0)
	goto even;
	else
	goto odd;
	even:
		printf("%d is even",x);
		return x;
	odd:
		printf("%d is odd",x);
	return 0;
}
