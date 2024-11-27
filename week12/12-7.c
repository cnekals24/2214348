#include <stdio.h>

int main(void) {
    char *proverb = "All that glisters is not gold";
    void setPointer(char **q) {
        *q = proverb;
    }
    
    char *p = "zzz";
    setPointer(&p);
    printf("%s\n", p);
    
    return 0;
}
