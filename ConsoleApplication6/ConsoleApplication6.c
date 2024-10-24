#include <stdio.h>
int main() {
    char sentence[1000];  // 문장을 저장할 배열
    int i = 0, word_count = 0;
    char ch;

    printf("문장을 입력하세요: \n");

    // getch()를 이용하여 한 문자씩 입력받기
    while ((ch = getch()) != '\r') {  // 엔터키(= '\r')를 누를 때까지
        if (i == 0 || sentence[i - 1] == ' ') {
            ch = toupper(ch);  // 첫 글자 대문자로 변환
        }
        putchar(ch);
        sentence[i++] = ch;  // 배열에 저장
    }

    sentence[i] = '\0';

    // 단어 개수 세기
    for (int j = 0; sentence[j] != '\0'; j++) {
        if ((j == 0 && sentence[j] != ' ') || (sentence[j] != ' ' && sentence[j - 1] == ' ')) {
            word_count++;
        }
    }

    printf("\n단어 수: %d\n", word_count);  // 단어 수 출력

    return 0;
}
