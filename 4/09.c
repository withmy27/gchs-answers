#include <stdio.h>

int main() {
    int n, m, a, b, nums[100];
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        nums[i] = i + 1;
    }

    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        
        a -= 1;
        b -= 1;

        while (a < b) {
            int temp = nums[a];
            nums[a] = nums[b];
            nums[b] = temp;
            a += 1;
            b -= 1;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
