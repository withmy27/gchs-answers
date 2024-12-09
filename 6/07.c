#include <stdio.h>

int main() {
    int n, i, count = 0;
    char input[100], is_group_word;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s", input);
        
        char exist[26] = { 0, }, temp = input[0];
        
        exist[input[0] - 'a'] = 1;
        is_group_word = 1;
        
        for (int j = 0; input[j] != '\0'; j++) {
            if (exist[input[j] - 'a'] && temp != input[j]) {
                is_group_word = 0;
                break;
            } else if (temp != input[j]) {
                exist[input[j] - 'a'] = 1;
            }
            temp = input[j];
        }

        if (is_group_word) {
            count += 1;
        }
    }

    printf("%d\n", count);

    return 0;
}
