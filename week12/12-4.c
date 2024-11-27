#include <stdio.h>

int main(void) {
    int grade[5];
    int sum = 0;
    int *ptr = grade;  
    int i;
    for (i=0; i<5; i++) {
        printf("Input value - grade[%d] = ", i);
        scanf("%d", &grade[i]);
    }
    
    for (i=0; i<5; i++) {
        printf("grade[%d] = %d\n", i, *(ptr+i));
        sum += *(ptr+i); 
    }
    
    
    float average = (float)sum / 5;
    printf("average: %f\n", average);
    
    return 0;
}
