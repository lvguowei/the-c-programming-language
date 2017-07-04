#include <stdio.h>

#define OUT 0
#define IN 1
#define MAX 10

int main() {
  int c;
  int flag;
  int count;
  int counts[MAX];

  count = 0;
  flag = OUT;
  for (int i = 0; i < MAX; ++i) {
    counts[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (flag == IN) {
        flag = OUT;
        if (count - 1 <= 10) {
          counts[count - 1]++;
          count = 0;
        }
      }
    } else {
      flag = IN;
      ++count;
    }
  }

  for (int i = 0; i < MAX; ++i) {
    int r = i + 1;

    printf("%2d | ", r);
    for (int j = 0; j < counts[i]; ++j) {
      printf("*");
    }
    printf("\n");
  }
}
