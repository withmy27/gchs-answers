#include <stdio.h>

int main() {
    int pieces[6] = {1, 1, 2, 2, 2, 8};
    int input[6];

    for (int i = 0; i < 6; i++) {
        scanf("%d", &input[i]);
    }

    for (int i = 0; i < 6; i++) {
        printf("%d ", pieces[i] - input[i]);
    }

    return 0;
}
