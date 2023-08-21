#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int palindrome(char* input);

int main() {

    char input[100];
    scanf("%s", &input);

    printf("%d", palindrome(input));

    return 0;
}

int palindrome(char input[]) {
    int n = strlen(input);

    int res = 1;
    for (int i = 0; i < n / 2; i++) {
        if (input[i] != input[n - i - 1]) {
            res = 0;
            break;
        }
    }
    return res;
}