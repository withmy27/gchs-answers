#include <stdio.h>

int main() {
    int a, b, c;
  
    scanf("%d %d", &a, &b);
    printf("%d\n", a * (b % 10));
    printf("%d\n", a * (b / 10 % 10));
    printf("%d\n", a * (b / 100));
    printf("%d\n", a * b);

    
    return 0;
}
