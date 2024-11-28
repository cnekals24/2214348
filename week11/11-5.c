#include <stdio.h>

int main() {
    FILE *fp;
    char word[50];

   
    fp = fopen("sample.txt", "w");
    
    int i; 
    for( i = 0; i < 3; i++) {
        printf("input a word:");
        scanf("%s", word);
        fprintf(fp, "%s\n", word);
    }
    
    
    fclose(fp);
    
    return 0;
}
