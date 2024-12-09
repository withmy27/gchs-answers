#include <stdio.h>

int main() {
    int x, y, z, time;
  
    scanf("%d %d", &x, &y);
    scanf("%d", &z);

    time = x * 60 + y + z < 1440 
      ? x * 60 + y + z 
      : x * 60 + y + z - 1440;
  
    printf("%d %d\n", time / 60, time % 60);
  
    return 0;
}
