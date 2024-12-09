#include <stdio.h>

int main()  {
    char subject[50], grade[3];
    double score, grade_value;
    double score_sum = 0.0, grade_sum = 0.0;
    
    for (int i = 0; i < 20; i += 1) {
        scanf("%s %lf %s", subject, &score, grade);
    
        if (grade[0] == 'P') continue;
        else if (grade[0] == 'F') grade_value = 0.0;
        else grade_value = 4.0 + 'A' - grade[0] + (grade[1] == '+' ? 0.5 : 0.0);
    
        score_sum += score;
        grade_sum += score * grade_value;
    }
    
    printf("%lf\n", grade_sum / score_sum);
    
    return 0;
}
