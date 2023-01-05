#include<stdio.h>
void cube(int a){
	
	a= a*a*a;
	
	printf("%d",a);
}
 main(){
	int n;
	printf("Enter the cube:");
	scanf("%d",&n);
	cube(n);
}
