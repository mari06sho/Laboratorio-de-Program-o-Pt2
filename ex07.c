/*Exemplo usando o sscanf*/

#include <stdio.h>

int main(void)
{
  char s[] = "31298 87.375";
  int x;
  float y;

  sscanf(s, "%d%f", &x, &y);
  printf("%s\n%s\n", "A saida formatada armazenada no array e: ", s);
}

