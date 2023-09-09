#include <stdio.h>
#include <string.h>

int main () {
    char arr[5][16] = { 0, };
    int max = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%s", arr[i]);
        if (max < strlen(arr[i])) max = strlen(arr[i]);
    }
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < 5; j++) {
            if (arr[j][i] == '\0') continue;
            printf("%c", arr[j][i]);
        }
    }
    return 0;
}