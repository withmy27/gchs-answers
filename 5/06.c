#include <stdio.h>

int main() {
    char input[100];
    char arr[26];

    for (int i = 0; i < 26; i++) {
        arr[i] = -1;
    }

    scanf("%s", input);

    for (int i = 0; input[i] != '\0'; i++) {
        if (arr[input[i] - 'a'] == -1) {
            arr[input[i] - 'a'] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
