#include<stdio.h>
int main(){
	int marks;
	
	printf("Enter the marks percentage obtained:");
	scanf("%d",&marks);

	if (marks>=60){
		printf("You have passed with 1st Division");
	}
	else if(marks>=45){
		printf("You have passed with 2nd division");
	}
	else if (marks>=33){
		printf("You have passed with 3rd division");
	}
	else if(marks<=33){
		printf("You have failed");
	}
	else{
		printf("Enter a valid percentage");
	}
	return 0;
}
