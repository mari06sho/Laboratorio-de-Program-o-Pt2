/*Exemplo usando getchar e puts*/
#include <stdio.h>

int main(void)
{

  char c, s[80];
  int i = 0;

  puts("Digite uma linha de texto:");
  while ((c = getchar()) != '\n')
    s[i++] = c;

  s[i] = '\0';
  puts("\nA linha digitada foi:\n");
  puts(s);
  return 1;
}

