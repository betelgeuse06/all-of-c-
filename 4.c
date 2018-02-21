#include <stdio.h>

int main(int argc, char const *argv[]) {
  int num1 = 100, num2 = 100;
  int * pnum;

  pnum = &num1;
  (*pnum) += 20;

  pnum = &num2;
  (*pnum) -= 20;

  printf("%d %d\n", num1, num2);
  return 0;
}
