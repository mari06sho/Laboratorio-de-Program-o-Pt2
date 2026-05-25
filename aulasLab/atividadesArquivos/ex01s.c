/* Usando os operadores de membro de estrutura e de ponteiro de estrutura */
#include <stdio.h>

struct carta
{
  char *face;
  char *naipe;
};

int main()
{
  struct carta a;
  struct carta *aPtr;

  a.face = "As";
  a.naipe = "Espadas";
  aPtr = &a;

  printf("%s de %s\n", a.face, a.naipe);             // acesso com .
  printf("%s de %s\n", aPtr->face, aPtr->naipe);     // acesso com ->
  printf("%s de %s\n", (*aPtr).face, (*aPtr).naipe); // equivalente ao ->

  return 0;
}
