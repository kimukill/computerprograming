#include <stdio.h>

int main()
{
    int sel = 0;
    int a = 0, b = 0, c = 0;
    printf("두 수 입력 \n");
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    printf("0:덧셈, 1:뺄셈, 2:곱셈, 3:나눗셈 \n");
    scanf_s("%d", &sel);

    switch (sel) {
    case 0:
        c = a + b;
        break;
    case 1:
        c = a - b;
        break;
    case 2:
        c = a * b;
        break;
    case 3:
        if (b != 0) {
            c = a / b;
        }
        else {
            printf("0으로 나눌 수 없습니다.\n");
            return 1; // 나눗셈 에러
        }
        break;
    default:
        printf("잘못된 선택입니다.\n");
        return 1;
    }

    printf("\n계산된 값: %d\n", c);
    return 0;
}
