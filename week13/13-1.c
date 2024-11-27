#include <stdio.h>
#include <stdlib.h>


struct student {
    int studentId;
    char name[50];
    float grd;
};

int main(void) {
    struct student s1;
    
    
    printf("enter the studendID: ");
    scanf("%d", &s1.studentId);
    printf("enter the name: ");
    scanf("%s", s1.name);
    printf("enter the grade: ");
    scanf("%f", &s1.grd);
    
   
    
    printf("ID: %d\n", s1.studentId);
    printf("name: %s\n", s1.name);
    printf("grade: %.2f\n", s1.grd);
    
    return 0;
}
