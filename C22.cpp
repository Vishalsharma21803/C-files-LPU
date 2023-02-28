#include <stdio.h>
int main (){
	int a,b,c,max;
	printf("Enter a,b and c (put a space between the entered numbers): ");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b){
		if (a>c){
			max=a;
			printf("Maximum number is:  %d",max);
		}
		else{
			max=c;
			printf("Maximum number is:  %d",max);
		}
	}
	else if(a==b && b==c){
		printf("a,b and c are equal");
	}
	else if(b>c){
		if (b>a){
			max=b;
			printf("Maximum number is:  %d",max);
		}
		else{
			max=a;
			printf("Maximum number is:  %d",max);
		}
	}
	else{
		max=c;
		printf("Maximum number is:  %d",max);
	}
}
