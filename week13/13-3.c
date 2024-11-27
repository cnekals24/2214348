#include <stdio.h>
#define STUDENTNUM 4

struct student {
    int ID;
    int score;
};

int main(void) {
    struct student s[STUDENTNUM];
    int i;
    int max_score = 0;
    int max_id = 0;
    int sum;
    float average;
    
    
    for(i = 0; i < STUDENTNUM; i++) {
        printf("Input the ID: ");
        scanf("%d", &s[i].ID);
        printf("Input the score: ");
        scanf("%d", &s[i].score);
        
    	sum += s[i].score;
    
    average = (float)sum / STUDENTNUM;
    
    
        if(s[i].score > max_score) {
            max_score = s[i].score;
            max_id = s[i].ID;
            
        
        }
    }
    printf("The average of the score:%f\n",average);
    printf("The highest score - ID: %d, score: %d\n", max_id, max_score);
    
    return 0;
}
