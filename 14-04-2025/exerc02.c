#include<stdio.h>

int main() {
  int num = 10;
  printf("O valor do numero e %d\n", num);

  float height = 1.5;
  double value = 5.281902;
  printf("A altura seria %f\n", height);
  printf("O valor seria %.3f\n", value);

  char letra = 'a';
  printf("Ol%c mundo\n", letra);

  char string[] = "Ola mundo!";
  printf(string);
  return 0;
}