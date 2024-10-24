#include <stdio.h>

int main() {
    int n;

    printf("마름모의 크기를 입력하세요 (홀수로 입력하세요): ");
    scanf_s("%d", &n);

    if (n % 2 == 0) {
        printf("홀수만 입력 가능합니다.\n");
        return 1;
    }

    int mid = n / 2;  // 마름모의 가운데 줄 위치

    // 윗부분 출력
    for (int i = 0; i <= mid; i++) {
        // 공백 출력
        for (int j = 0; j < mid - i; j++) {
            printf(" ");
        }
        // 별 출력
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // 아랫부분 출력
    for (int i = mid - 1; i >= 0; i--) {
        // 공백 출력
        for (int j = 0; j < mid - i; j++) {
            printf(" ");
        }
        // 별 출력
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
