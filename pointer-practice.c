#include<stdio.h>

int main() {
  int i = 10;
  int j = 20;
  int* p = &i;
  printf("Value of i=%d, address=%p\n", i, p);
  p = &j;
  printf("Value of i=%d, j=%d, address=%p, value of p=%d\n", i, j, p, *p);
  *p = 100;
  printf("Value of i=%d, j=%d, address=%p, value of p=%d\n", i, j, p, *p);
  return 0;
}
