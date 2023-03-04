#include <stdio.h>
void fun(){
	static int a=20;
	++a;
	printf("%d",a);
	
}
int main(){
	fun();
	fun();
	fun();
	return 0;
}
