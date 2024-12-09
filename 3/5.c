#include <stdio.h>

int main() {
    int x;
  
    scanf("%d", &x);

    x /= 4;
  
    for (int i = 0; i < x; i++) {
        printf("long ");
    }
  
    puts("int");
  
    return 0;
}
