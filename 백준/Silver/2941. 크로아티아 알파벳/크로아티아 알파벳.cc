#include <stdio.h>
#include <string.h>

int main() {
    
    char input[101];
    
    scanf("%s", input);

    int cnt = strlen(input);

    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == '=') {
            if (input[i - 1] == 'c' || input[i - 1] == 's' || input[i - 1] == 'z') {
                cnt--;
            }
            if (input[i - 1] == 'z' && input[i - 2] == 'd') {
                cnt --;
            }
        }
        if (input[i] == '-') {
            if (input[i - 1] == 'c' || input[i - 1] == 'd') {
                cnt--;
            }
        }
        if (input[i] == 'j') {
            if (input[i - 1] == 'l' || input[i - 1] == 'n') {
                cnt--;
            }
        }
    }

    printf("%d", cnt);

    return 0;
}