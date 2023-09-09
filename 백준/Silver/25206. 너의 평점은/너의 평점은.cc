#include <stdio.h>
#include <string.h>

int main() {
    char sub[51];
    float k = 0;
    char grade[4];
    float res = 0;
    int sum = 0;

    for (int i = 0; i < 20; i++) {
        float temp = 0;
        scanf(" %s %f %s", sub, &k, grade);

        if (grade[0] == 'P') {
            continue;
        }
        else if (grade[0] == 'A') {
            temp = 4.0;
        }
        else if (grade[0] == 'B') {
            temp = 3.0;
        }
        else if (grade[0] == 'C') {
            temp = 2.0;
        }
        else if (grade[0] == 'D') {
            temp = 1.0;
        }
        if (grade[1] == '+') {
            temp += 0.5;
        }
        sum += k;
        res += k * temp;
    }
    printf("%f\n", res/(float)sum);

    return 0;
}