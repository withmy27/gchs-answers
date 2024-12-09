#include <stdio.h>

int main() {
    int n, m, t;
    int matrix[100][100];
    
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < n; i += 1) {
        for (int j = 0; j < m; j += 1) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int i = 0; i < n; i += 1) {
        for (int j = 0; j < m; j += 1) {
            scanf("%d", &t);
            matrix[i][j] += t;
        }
    }
    
    for (int i = 0; i < n; i += 1) {
        for (int j = 0; j < m; j += 1) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
