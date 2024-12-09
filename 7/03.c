#include <stdio.h>

int main() {
    char words[5][15];
    
    for (int i = 0; i < 5; i += 1) {
        scanf("%s", words[i]);
    }
    
    for (int j = 0; j < 15; j += 1) {
        for (int i = 0; i < 5; i += 1) {
            if (words[i][j]) {
                printf("%c", words[i][j]);
            }
        }
    }
    
    return 0;
}
