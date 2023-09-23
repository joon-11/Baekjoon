#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include <stdbool.h>

bool IsEndNumber(int number);

int main() {
    int n = 0;
    int temp = 0;
    int result = 666;
    int i = 0;


    scanf("%d", &n);
    n = n - 1;
    while(1){
        if (n == 0) {
        }
        else {
            result = result += 1;
            if (IsEndNumber(result) == 1) {
                temp += 1;
            }
        }
        if (temp == n) {
            break;
        }
    }
        printf("%d\n", result);
    
}

bool IsEndNumber(int number) {
    int res = 0;
    while (number != 0) {
        if (number % 10 == 6) {
            number = number / 10;
            res += 1;
        }
        else {
            number = number / 10;
            res = 0;
        }
        if (res == 3) {
            return true;
        }
    }
    return false;
}