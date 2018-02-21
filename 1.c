#include <stdio.h>
int num1, num2;

int main1(void){
  printf("%s\n", "practice project file-1");
}

int main2(int num1, int num2){
  return num1 + num2;
}

int main(int argc, char const *argv[]) {
  main1();
  num1 = 1, num2 = 2;
  printf("%d\n", main2);
  return 0;
}
