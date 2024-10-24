#include<stdio.h>

// 함수 선언
void sort(int idx[], int loop);

int main() {
    int idx[1000];
    int loop = 0;

    printf("배열의 길이: ");
    scanf_s("%d", &loop);

    for (int i = 0; i < loop; i++) {
        printf("\n%d번째 수를 입력하세요: ", i + 1);
        scanf_s("%d", &idx[i]);
    }

    printf("입력받은 배열[");
    for (int i = 0; i < loop; i++) {
        printf("%d", idx[i]);
        if (i < loop - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    sort(idx, loop);

    printf("정렬한 배열[");
    for (int i = 0; i < loop; i++) {
        printf("%d", idx[i]);
        if (i < loop - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}

// 버블 정렬 함수
void sort(int idx[], int loop) {
    int save = 0;

    for (int i = 0; i < loop - 1; i++) {
        for (int j = 0; j < loop - i - 1; j++) {
            if (idx[j] > idx[j + 1]) {
                save = idx[j];
                idx[j] = idx[j + 1];
                idx[j + 1] = save;
            }
        }
    }
}
