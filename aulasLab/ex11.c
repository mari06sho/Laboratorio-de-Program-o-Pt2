#include <stdio.h>
#include <string.h>

int main(void)
{
  char *string = "Isso e um teste";
  char c1 = 'm', c2 = 'z';

  if (strchr(string, c1) != NULL)
    printf("%c foi encontrado em %s \n", c1, string);
  else
    printf("%c nao foi encontrado em %s \n", c1, string);

  if (strchr(string, c2) != NULL)
    printf("%c foi encontrado em %s \n", c2, string);
  else
    printf("%c nao foi encontrado em %s \n", c2, string);

  return 0;
}

