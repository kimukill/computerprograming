#include<stdio.h>
int main() {
	int input = 0;
	int output = 0;
	printf("줄의 수를 입력하시오:");
	scanf_s("%d", &input);
	for (int i = 1; i <= input; i++) {
		for (int j = 1; j < i; j++) {
			output += 2;
		}
	}
	printf("%d", output);
}