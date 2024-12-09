#include <stdio.h>

int main() {
    int n, min, max, input;

    scanf("%d", &n);
    scanf("%d", &min);
  
    max = min;

    for (int i = 1; i < n; i++) {
        scanf("%d", &input);

        if (input < min) min = input;
        else if (input > max) max = input;
    }

    printf("%d %d\n", min, max);

    return 0;
}
