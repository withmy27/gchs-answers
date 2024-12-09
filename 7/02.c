#include <stdio.h>

int main() {
    int input, max = -1, max_i;
    
    for (int i = 0; i < 9 * 9; i += 1) {
        scanf("%d", &input);
        
        if (input > max) {
        max = input;
        max_i = i;
        }
    }
    
    printf("%d\n", max);
    printf("%d %d\n", max_i / 9 + 1, max_i % 9 + 1);
    
    return 0;
}
