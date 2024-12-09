#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    a = a + 99 * (a % 10 - a / 100);
    b = b + 99 * (b % 10 - b / 100);
    
    printf("%d\n", a > b ? a : b);
    
    return 0;
}
