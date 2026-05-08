/*Usando strcpy e strncpy*/

#include <stdio.h>
#include <string.h>

int main(void)
{

  char x[] = "Feliz Aniversario";
  char y[20], z[6];

  printf("%s%s\n%s%s\n",
         "A string no array x e: ", x,
         "A string no array y e: ", strcpy(y, x));

  strncpy(z, y, 5);
  z[5] = '\0';

  printf("A string no array z e: %s\n", z);

  return 0;
}

