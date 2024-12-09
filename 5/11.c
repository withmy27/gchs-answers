#include <stdio.h>

int main() {
    char input[100];

    while (fgets(input, 100, stdin) != NULL) {
        printf("%s", input);
    }

    return 0;
}
