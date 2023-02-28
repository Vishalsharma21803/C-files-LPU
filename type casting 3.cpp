#include <stdio.h>
int main(){
	int x=10;  //integer
	char y='a'; //character
	// y implicitly converted to int ASCII
	// value of 'a' is 97 ('a' = 97 assigned by ASCII)
	int k=x+y;
	float z=x+1.0;
	printf("k=%d, z=%f",k,z);
	return 0;
}
