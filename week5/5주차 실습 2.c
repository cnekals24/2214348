#include <stdio.h>

int main(int argc,char *argv[]){
	int a,b;
	
	printf("Input two integers: ");
	scanf("%i %i",&a,&b);
	
	printf("+ result is %i\n- result is %i\n* result is %i\n",a+b,a-b,a*b);
	printf("/ result is %i\n%% result is %i\n",a/b,a%b);
	
	
} 
