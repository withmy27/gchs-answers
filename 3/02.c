#include <stdio.h>

int main() {
    int n, a, b;
  
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
      
        if (0 < a && a < 10 && 0 < b && b < 10)
            printf("%d\n", a + b);
    }
  
    return 0;
}
