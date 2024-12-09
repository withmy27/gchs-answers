include <stdio.h>

int main() {
    char len = 0, input[100];
    
    scanf("%s", input);
    
    for (int i = 0; input[i] != '\0'; i++, len++);
    
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] != input[len - i - 1]) {
            printf("0");
          
            return 0;
        }
    }
    
    printf("1");
    
    return 0;
}
