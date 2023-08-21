#include <stdio.h>

int main() {
	int num1, num2;
	int temp1, temp2, temp3;

    int arr[101];

	scanf("%d %d", &num1, &num2);
	

	for (int i = 1; i <= num1; i++) {
		arr[i] = i;
	}

    while (num2--) {

        scanf("%d %d", &temp1, &temp2);

        while (!(temp1 > temp2)) {

            temp3 = arr[temp1];
            arr[temp1] = arr[temp2];
            arr[temp2] = temp3;
            temp1++;
            temp2--;
        }
    }


    for (int i = 1; i <= num1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
