// Program to find the area and circumference of a circle of the inputed radius by the user 
#include<stdio.h>
int main(){
	int radius;
	scanf("%d",&radius);
	printf("The area of the circle is: %f", 3.14*radius*radius);
	printf("\nThe circumference of the circle is : %f",2*3.14*radius);
	return 0;
}
