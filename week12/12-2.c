#include <stdio.h>

int main(void) {
    int i = 4;
    int *pi = &i;
    char c = 'a';    
    char *pc = &c;  
    
    printf("%i, %i, %i\n", i, *pi, *pc);
    
    return 0;
}
