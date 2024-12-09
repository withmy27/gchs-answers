#include <stdio.h>

int main() {
    int n;
    double max = 0.0, sum = 0.0, nums[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%lf", &nums[i]);
        
        if (nums[i] > max) {
            max = nums[i]; // 최대값 업데이트
        }
        sum += nums[i]; // 합계 계산
    }

    printf("%.2lf\n", (sum / max) * 100.0 / n);

    return 0;
}
