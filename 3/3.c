#include <stdio.h>

int main() {
    int n, r = 0;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        r += i + 1;
    }
  
    printf("%d\n", r);

    return 0;
}
