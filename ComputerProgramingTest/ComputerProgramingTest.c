#include <stdio.h>

int main() {
	char txt = 97;
	int a = 0;
	scanf_s("%d", &a);
	for (int i = 1; i <= a; i++) {
		for (int j = 0; j < i; j++) {
			if (txt > 122 || txt < 97) {
				txt = 97;
			}
			printf("%c", txt);
			txt++;
		}
		printf("\n");
	}
	return 0;
}