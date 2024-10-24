#include <stdio.h>

int main()
{
    int input = 0;
    int output = 0;
    scanf_s("%d", &input);

    for (int i = 2; i <= input; i += 2) {
        output += i;
    }

    printf("\n%d \n", output);
    return 0;
}
