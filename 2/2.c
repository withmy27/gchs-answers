#include <stdio.h>

int main() {
    int a;
  
    scanf("%d", &a);

    if (90 <= a && a <= 100) puts("A");
    else if (80 <= a && a <= 89) puts("B");
    else if (70 <= a && a <= 79) puts("C");
    else if (60 <= a && a <= 69) puts("D");
    else puts("F");

    return 0;
}
