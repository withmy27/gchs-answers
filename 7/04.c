#include <stdio.h>

int main() {
    int n, i, j, x, y, count = 0;
    char *cell, grid[10000] = { 0, };

    scanf("%d", &n);

    for (i = 0; i < n; i += 1) {
        scanf("%d %d", &x, &y);

        for (j = 0; j < 100; j += 1) {
            cell = &grid[(x + j / 10) * 100 + y + j % 10];

            if (!*cell) (*cell = 1, count += 1);
        }
    }

    printf("%d\n", count);

    return 0;
}
