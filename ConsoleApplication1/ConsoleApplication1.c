#include <stdio.h>

int main(){
	int a = 0;
	scanf_s("%d", &a);
	for (int i = 0; i < a; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < a; j++) {
				printf("* ");
			}
		}
		else {
			for (int j = 0; j < a; j++) {
				printf(" *");
			}
		}
		printf("\n");
	}
}
