/*Usando o sprintf */
#include <stdio.h>

int main(void)
{
  char s[80];
  int x;
  float y;

  printf("Digite um valor inteiro e um valor float \n");
  scanf("%d%f", &x, &y);

  sprintf(s, "Inteiro: %6d\nFloat: %8.2f", x, y);
  printf("%s\n%s\n", "A saida formatada armazenada no array e: ", s);
  return 0;
}

