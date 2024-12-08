#include <stdio.h>


int main(void){
    int i;
    int grade[5];

    grade[0] = 10;
    grade[1] = 20;
    grade[2] = 40;
    grade[3] = 30;
    grade[4] = 60;
    
    for(i=0;i<5,i++)   
        printf("grade[%d] = %d\n",i,grade[i]);
    return 0;
} 