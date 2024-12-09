#include <stdio.h>

int main() {
    int x, y, time;
  
    scanf("%d %d", &x, &y);

    time = x * 60 + y - 45 >= 0 
        ? x * 60 + y - 45 
        : x * 60 + y - 45 + 24 * 60;
  
    printf("%d %d\n", time / 60, time % 60);

    return 0;
}
