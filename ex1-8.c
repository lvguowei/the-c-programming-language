#include <stdio.h>

int main() {
    int blanks = 0, tabs = 0, newlines = 0;
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ') blanks++;
        if (c == '\t') tabs++;
        if (c == '\n') newlines++;
    }

    printf("blanks: %d, tabs: %d, newlines: %d\n", blanks, tabs, newlines);
}
