#include<stdio.h>
int main(){
	int x=1,y=0,z=5;
	int a =x&&y&&z++;  /* if the statement a is false then the operation z++ will not take place and if statement a is true and if in statement a if z is the only truth value then it will 
	execute the z++ part if y is also true then the z++ part will nor execute because then z is not the only truth value.
	in the end we can say ---   0||z++; and z is true then it will perform one more opetation i.e, z++ otherwise it will not */
	printf("%d",z);
	return 0;
}
