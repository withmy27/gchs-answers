#include <stdio.h>

int main() {
    int num, count = 0;
    char remainders[42] = { 0, };
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        num %= 42;
        
        if (remainders[num]) {
            continue;
        } else {
            remainders[num] = 1;
            count++;
        }
    }
    printf("%d\n", count);
}
