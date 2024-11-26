#include <stdio.h>
#define STUDENTNUM 4

struct student {
    int ID;
    int score;
};

int main(void) {
    struct student s[STUDENTNUM];
    int i;
    int maxScore = 0;
    int maxId = 0;
    
    
    for(i = 0; i < STUDENTNUM; i++) {
        printf("Input the ID: ");
        scanf("%d", &s[i].ID);
        printf("Input the score: ");
        scanf("%d", &s[i].score);
        
        
        if(s[i].score > maxScore) {
            maxScore = s[i].score;
            maxId = s[i].ID;
        }
    }
    
    printf("\nThe highest score - ID: %d, score: %d\n", maxId, maxScore);
    
    return 0;
}
