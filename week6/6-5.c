#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() {
	int a,b;
	char op;
	printf("Enter the calculation: ");
	scanf("%i %c %i",&a, &op, &b);
	
	
	if (op == '+') {
		printf("= %i\n",a+b);
	} else if (op == '-'){
		printf("= %i\n",a-b);
	} else if (op == '*'){
		printf(" %i\n",a*b); 
	} else if (op == '/'){
		printf("= %i\n",a/b);
	} 
	 
	
	return 0 ;

}
