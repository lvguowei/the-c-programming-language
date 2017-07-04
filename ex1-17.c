#include <stdio.h>
#define MAXLINE 1000
#define LONGLINE 80

int getLine(char s[], int lim);
int main() {
  char line[MAXLINE];
  int count;

  count = 0;
  while ((count =getLine(line, MAXLINE)) != 0) {
    if (count > 80) {
      printf("%s", line);
    }
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
