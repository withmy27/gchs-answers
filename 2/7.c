#include <stdio.h>

int main() {
    int x, y, z;
    int i = 0, j = 0;
  
    scanf("%d %d %d", &x, &y, &z);

    if (x == y) {
        i++;
        j = x;
    }
  
    if (y == z) {
        i++;
        j = y;
    }
  
    if (z == x) {
        i++;
        j = z;
    }
  
    printf(
        "%d\n",
        i >= 2 
            ? 10000 + j * 1000 
            : i == 1 
                ? 1000 + j * 100 
                : x > y && x > z 
                    ? x * 100 
                    : y > z && y > x 
                        ? y * 100 
                        : z * 100
    );
  
    return 0;
}
