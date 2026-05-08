/*Usando strcspn*/

#include <stdio.h>
#include <string.h>

int main(void)
{
  char *s1 = "O valor e 3.14159";
  char *s2 = "1234567890";

  printf("%s%s\n%s%s\n\n%s\n%s%u",
         "string1= ", s1, "string2=", s2,
         "Comprimento do segmento inicial de s1",
         "que nao contem caracteres de s2 =",
         strcspn(s1, s2));

  return 0;
}
