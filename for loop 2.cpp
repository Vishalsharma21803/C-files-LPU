#include <stdio.h>
int main(){
	int sum=0,n,i;
	printf("Enter the value: " );
	scanf("%d",&n);
	for (i=0;i<=n;i++){
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}
