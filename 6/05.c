#include <stdio.h>

int main() {
  char same = 0, input[1000000];
  int count[128], max_index = 0;

  scanf("%s", input);

  for (int i = 0; input[i] != '\0'; i += 1) {
    if ('a' <= input[i] && input[i] <= 'z') {
        input[i] -= ('a' - 'A');
    }
    count[input[i]] += 1;
  }
  
  for (int i = 0; i < 128; i += 1) {
    if (count[i] > count[max_index]) {
      max_index = i;
      same = 0;
    } else if (count[i] == count[max_index]) {
      same = 1;
    }
  }
  
  printf("%c", same ? '?' : max_index);

  return 0;
}
