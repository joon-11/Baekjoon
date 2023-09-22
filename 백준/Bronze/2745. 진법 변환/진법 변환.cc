#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	char input [1024]="";
	int b;
	scanf("%s %d", input, &b);

	int i = 0, res = 0;
	
	while (input[i]) {
		res = res * b + (input[i] < 'A' ? input[i] - '0' : input[i] - 'A' + 10);
		++i;
	}

	printf("%d", res);
	return 0;	
}