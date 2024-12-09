#include <stdio.h>

int main() {
    char input[20];
    int n, m;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %s", &m, input);

        for (int j = 0; input[j] != '\0'; j++) {
            for (int k = 0; k < m; k++) {
                printf("%c", input[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
