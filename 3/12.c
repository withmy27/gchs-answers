#include <stdio.h>

int main() {
    int a, b, i = 0;
    
    while (scanf("%d %d", &a, &b) != EOF) {
        printf("%d\n", a + b);
    }

    return 0;
}
