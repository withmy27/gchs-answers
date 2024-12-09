#include <stdio.h>

int main() {
    char input[15];
    int count = 0;

    scanf("%s", input);

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'A' && input[i] <= 'C') count += 3;
        else if ('D' <= input[i] && input[i] <= 'F') count += 4;
        else if ('G' <= input[i] && input[i] <= 'I') count += 5;
        else if ('J' <= input[i] && input[i] <= 'L') count += 6;
        else if ('M' <= input[i] && input[i] <= 'O') count += 7;
        else if ('P' <= input[i] && input[i] <= 'S') count += 8;
        else if ('T' <= input[i] && input[i] <= 'V') count += 9;
        else if ('W' <= input[i] && input[i] <= 'Z') count += 10;
    }

    printf("%d\n", count);
    
    return 0;
}
