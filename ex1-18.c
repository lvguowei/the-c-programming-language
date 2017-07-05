#include <stdio.h>
#define MAXLINE 1000

int getLine(char s[], int lim);
int removeTrailingWhiteSpace(char s[]);

int main() {
  char line[MAXLINE];

  while (getLine(line, MAXLINE) > 0) {
    if (removeTrailingWhiteSpace(line) > 0)
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

int removeTrailingWhiteSpace(char s[]) {
  int i;

  for(i = 0; s[i] != '\n'; ++i)
    ;

  for(i = i - 1; i > 0 && (s[i] == ' ' || s[i] == '\t'); --i)
    ;
  s[i + 1] = '\n';
  s[i + 2] = '\0';

  return i;
}
