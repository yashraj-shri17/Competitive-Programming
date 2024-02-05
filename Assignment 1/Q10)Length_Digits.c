#include <stdio.h>
int calculateDigitSum(char str[]) {
    if (str[0] == '\0') {
        return 0; 
    } else {
        return 1+ calculateDigitSum(str + 1);
    }
}

int main() {
    char str[100];
    gets(str);

    int digit_no = calculateDigitSum(str);

    printf("%d", digit_no);

    return 0;
}
