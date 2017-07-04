#include <stdio.h>

int main() {
    int result = getchar() != EOF;
    if (result == 1) {
        printf("not EOF\n");
    } else if (result == 0){
        printf("is EOF\n");
    }
}
