/*Exemplo usando fgets e putchar*/
#include <stdio.h>

void reverse(char *s);

int main(void)
{
  char str[80];

  printf("Digite uma linha de texto:\n");
  fgets(str, 80, stdin);

  printf("\nA linha impressa em ordem reversa e:\n");
  reverse(str);

  return 0;
}

void reverse(char *s)
{
  if (s[0] == '\0')
    return;
  else
  {
    reverse(&s[1]);
    putchar(s[0]);
  }
}