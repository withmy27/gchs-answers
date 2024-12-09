#include <stdio.h>

int main() {
    int max, max_index = 0, input;

    scanf("%d", &max);

    for (int i = 1; i < 9; i++) {
        scanf("%d", &input);
        
        if (input > max) {
            max = input;
            max_index = i;
        }
    }

    printf("%d\n%d\n", max, max_index + 1);

    return 0;
}
