#include <stdio.h>
#include <string.h>

int main() {
    char a[9999];
    char what[2]; // 한 문자를 저장할 공간

    printf("문장 입력: ");
    scanf_s("%s", a, (unsigned)sizeof(a)); // sizeof로 배열의 크기 전달

    printf("찾을 문자 입력: ");
    scanf_s("%1s", what, (unsigned)sizeof(what)); // 한 문자만 입력받음

    int how = 0;

    for (int i = 0; a[i] != '\0'; i++) { // 문자열 끝까지 반복
        if (a[i] == what[0]) {
            how++;
        }
    }

    printf("문자 %c가 %d번 나왔습니다.\n", what[0], how);

    return 0;
}
