#include <stdio.h>
#define MAXLINE 1000

int getLine(char s[], int lim);
void reverse(char s[]);

int main() {
  char line[MAXLINE];

  while (getLine(line, MAXLINE) > 0) {
    reverse(line);
    printf("%s", line);
  }
}

int getLine(char s[], int lim) {
  int c, i, j;

  j = 0;
  for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
    if (i < lim - 2) {
      s[j] = c;
      ++j;
    }
  }

  if (c == '\n') {
    s[j] = c;
    ++j;
    ++i;
  }
  s[j] = '\0';
  return i;
}

void reverse(char s[]) {
  int i;

  for (i = 0; s[i] != '\n'; ++i)
    ;

  --i;
  for (int j = 0; j < i; ++j, --i) {
    char temp = s[j];
    s[j] = s[i];
    s[i] = temp;
  }
}
