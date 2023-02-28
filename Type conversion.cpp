#include <stdio.h>
// Explicit type conversion (converting forcefully)
int main(){
	int counter=10;
	float average, total=55;
	average=total/(float) counter;
	printf("%f",average);
	return 0;
}
