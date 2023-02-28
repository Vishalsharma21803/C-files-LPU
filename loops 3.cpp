#include <stdio.h>
int main(){
	int input, first, second, third,n;
	first=0;
	second=1;
	scanf("%d",&input);
	n=2;
	if (input==0){
		printf("");
	}
	else if(input==1){
		printf("%d",first);
	}
	else if(input==2){
		printf("%d",first);
		printf("%d",second);
	}
	else{
		printf("%d ",first);
		printf("%d ",second);
		while(n<input){
		
		third=first+second;
		first=second;
		second=third;
		printf("%d ",third);
		n=n+1;}
	}
	
	
	
	return 0;
}
