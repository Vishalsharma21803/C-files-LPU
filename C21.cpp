#include <stdio.h>
int main(){
	int a,b,c,max;
	printf("Enter a,b and c(put a space between the numbers): ");
	scanf("%d%d%d",&a,&b,&c);
	
	if (a>b && a>c || a==b && a>c || a==c&&a>b){
		max=a;
		printf("The maximum number is :%d ",max);
	}
	else if(b>a && b>c || b==a && b>c || b==c && b>a){
		max=b;
		printf("The maximum number is : %d",max);
	}
	else if(c>b && c>a || c==b&&c>a || c==a && c>b){
		max=c;
		printf("The maximum number is :%d ",max);
	}
	else if (a=b=c){
		printf("all three numbers are equal");
	}
	else{
		printf("Enter valid input");
	}
	
	return 0;
}
