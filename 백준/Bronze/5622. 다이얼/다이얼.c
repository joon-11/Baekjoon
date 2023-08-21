int main() {

	char a[16];
	scanf("%s", &a);

	int result = 0;

	int i = 0;
	while (a[i]) {
		result += (a[i] - 'A') / 3 + 3;
		if (a[i] == 'S' || a[i] == 'V' || a[i] == 'Y' || a[i] == 'Z') result -= 1;
		++i;
	}

	printf("%d\n", result);

	return 0;
}