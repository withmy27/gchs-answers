#include <stdio.h>

int main() {
    int n, m, start, end, x, nums[100] = { 0, };
    
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &start, &end, &x);

        for (int j = start - 1; j <= end - 1; j++) {
            nums[j] = x;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    
    return 0;
}
