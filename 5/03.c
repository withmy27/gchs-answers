#include <stdio.h>

int main() {
    char str[1000];
    int len, t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%s", str);

        len = 0;
        for (int j = 0; str[j] != '\0'; j++, len++);

        printf("%c%c\n", str[0], str[len - 1]);
    }

    return 0;
}
