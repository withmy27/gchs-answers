#include <stdio.h>

int main() {
    int x, y;
  
    scanf("%d", &x);
    scanf("%d", &y);

    if (x > 0 && y > 0) puts("1");
    else if (x < 0 && y > 0) puts("2");
    else if (x < 0 && y < 0) puts("3");
    else if (x > 0 && y < 0) puts("4");
  
    return 0;
}
