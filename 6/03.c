#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < (i < n ? n - i - 1 : i - n + 1); j++) {
            printf(" ");
        }
        
        for (int j = 0; j < (i < n ? 2 * i + 1 : 4 * n - 2 * i - 3); j++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}
