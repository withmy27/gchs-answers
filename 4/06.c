#include <stdio.h>

int main() {
    int n, m, start, end, nums[100];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        nums[i] = i + 1;
    }

    for (int i = 0; i < m; i++) {
        scanf("%d %d", &start, &end);

        int temp = nums[start - 1];
        nums[start - 1] = nums[end - 1];
        nums[end - 1] = temp;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
