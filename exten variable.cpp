#include <stdio.h>
void fun1();
void main(){
	extern int x;
	printf("x=%d\n",x);
	fun1();
}
fun1(){
	int x=1;
	x+=5;
	printf("x=%D\N",X);
	
}
int x=20;
