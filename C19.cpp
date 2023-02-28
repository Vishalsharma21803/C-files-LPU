#include<stdio.h>
int main(){
	float C,SQL,JAVA,SE;
	float percentage;
	printf("Enter the marks obtained in C, SQL, JAVA, and SE: ");
	scanf("%f %f %f %f",&C,&SQL,&JAVA,&SE);
    percentage=((C+SQL+JAVA+SE)*100)/400;
    printf("Your percentage is: %.2f",percentage);
	if (percentage>=60){
		printf("\nYou have passed with 1st Division");
	}
	else if(percentage>=45){
		printf("\nYou have passed with 2nd division");
	}
	else if (percentage>=33 && percentage<45){
		printf("\nYou have passed with 3rd division");
	}
	else if(percentage<=33){
		printf("\nYou have failed");
	}
	else{
		printf("\nEnter valid marks");
	}
	return 0;
}
