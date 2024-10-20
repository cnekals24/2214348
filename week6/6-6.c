#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(){
	int answer = 50;
	int guess;
	int tri = 0;
	
	do {
		printf("Guess a number: ");
		scanf("%i",&guess);
		
		tri++;
		
		if (guess < answer) {
			printf("Low!\n");
		} else if (guess > answer){
			printf("High!\n");
		} else
			printf("Congratulation! Trials: %i\n",tri);
		
	}while (guess != answer);
	
	return 0;
	
}
