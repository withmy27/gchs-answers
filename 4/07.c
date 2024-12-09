#include <stdio.h>

int main() {
    int i, input;
    char nums[30] = { 0, };

    for (i = 0; i < 28; i++) {
        scanf("%d", &input);
        input = 1;
    }

    for (i = 0; i < 30; i++) {
        if (nums[i] == 0) {
            printf("%d\n", i + 1);
        }
    }

    return 0;
}
