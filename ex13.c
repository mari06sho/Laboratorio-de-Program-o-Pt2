/*Usando strok*/

#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[] = "Esta e uma frase com 7 tokens";
  char *token;
  printf("%s\n%s\n\n%s\n",
         "A string a ser dividida em tokes e: ", s,
         "Os tokens sao: ");

  token = strtok(s, " ");

  while (token != NULL)
  {
    printf("%s\n", token);
    token = strtok(NULL, " ");
  }
  return 0;
}
