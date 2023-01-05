#include<stdio.h>
void div(int a){
	
	if(a%3==0 && a%5==0){
		printf("the number is div by 3&5 : %d",a);
	}
	else{
		printf("the number is not div bt 3&5 : %d",a);
	}
}
 main(){
	
	int n;
	
	printf("Enter the number ");
	scanf("%d",&n);
	
	div(n);
}
