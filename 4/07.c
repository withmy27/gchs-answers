#include <stdio.h>

int main() {
    int i, input;
    char nums[30] = { 0, }; // 30개의 숫자를 저장할 배열을 0으로 초기화

    for (i = 0; i < 28; i++) {
        scanf("%d", &input);
        nums[input - 1] = 1;
    }

    for (i = 0; i < 30; i++) {
        if (nums[i] == 0) {
            printf("%d\n", i + 1);
        }
    }

    return 0;
}
