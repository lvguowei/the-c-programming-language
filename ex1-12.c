#include <stdio.h>

int main() {
    int c;
    int flag;

    flag = 0;

    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t') {
            flag = 0;
            putchar(c);
        } else {
            if (flag == 0) {
                putchar('\n');
                flag = 1;
            }
        }
    }
}
