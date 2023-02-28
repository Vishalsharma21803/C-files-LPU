#include <stdio.h>
int main(){
	char chara;
	printf("Enter a character: ");
	scanf("%c",chara);
	if ((chara>='a' && chara<='z') || (chara>='A' && chara<='Z')){
		printf("%c is a valid character",chara);
	}
	else{
		printf("%c is not a valid character",chara);
	}
	return 0;
}
