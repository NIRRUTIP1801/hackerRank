#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s = malloc(1024 * sizeof(char)); 
    scanf("%s", s);  

    s = realloc(s, strlen(s) + 1);  
    int a[10] = {0}; 
    for (int i = 0; i < strlen(s); i++) {
        int k = s[i] - '0';  
        if (k >= 0 && k < 10) {
            a[k]++;  
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]); 
    }
    
    free(s);  
    return 0;
}
