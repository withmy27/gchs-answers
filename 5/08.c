#include <stdio.h>

int main() {
    char input[1000000];
    int words;

    for (words = 0; scanf("%s", input) != EOF; words += 1);

    printf("%d\n", words);

    return 0;
}
