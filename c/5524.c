#include <stdio.h>
#include <ctype.h>
int main() {
	char str[100][21];
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", str[i]);
	}
	int j = 0;
	for (int i = 0; i < n; i++) {
		while (str[i][j] != 0) {
			if (isupper(str[i][j])) {
				str[i][j] = tolower(str[i][j]);
			}
			j++;
		}
		j = 0;
	}
	for (int i = 0; i < n; i++) {
		printf("%s\n", str[i]);
	}
	return 0;
}