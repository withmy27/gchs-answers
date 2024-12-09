#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++, len++);
    
    printf("%d\n", len);

    return 0;
}
