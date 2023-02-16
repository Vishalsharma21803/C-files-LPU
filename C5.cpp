#include<stdio.h>
int main(){
	int d,a=1,b=2;
	d=a++ + ++b ;
	printf("\n%d,%d,%d",d,a,b);
	return 0;
}
