#include <stdio.h>

int main() {
    int x, n, a, b;
    
    scanf("%d", &x);
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
      
        if (1 <= a && a <= 1000000 && 1 <= b && b <= 10) {
            x -= a * b;
        }
    }
  
    if (!x) {
        puts("Yes");
    } else {
        puts("No");
    }

    return 0;
}
