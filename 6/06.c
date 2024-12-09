#include <stdio.h>

int main() {
    char input[100];
    char croatia[8][4] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int count, len = 0, i, j, k;

    scanf("%s", input);

    for (i = 0; input[i] != '\0'; i++, len++);

    count = len;

    for (i = 0; i < len; i++) {
        for (j = 0; j < 8; j++) {
            int c_len = 0;

            for (k = 0; croatia[j][k] != '\0'; k++, c_len++);

            for (k = 0; k < c_len; k++) {
                if (input[i + k] != croatia[j][k]) {
                    break;
                }
            }

            if (k == c_len) count -= 1;
        }
    }

    printf("%d\n", count);

    return 0;
}
