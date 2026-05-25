/*usando strcmp e strncmp*/
#include <stdio.h>
#include <string.h>

int main(void)
{
  char *s1 = "Feliz Ano Novo";
  char *s2 = "Feliz Ano Novo";
  char *s3 = "Feliz Natal";

  printf("%s%s\n%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n\n",
         "s1 = ", s1, "s2 = ", s2, "s3 = ", s3,
         "strcmp(s1,s2) = ", strcmp(s1, s2),
         "strcmp(s1,s3) = ", strcmp(s1, s3),
         "strcmp(s3,s1) = ", strcmp(s3, s1));

  printf("%s%s\n%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n\n",
         "s1 = ", s1, "s2 = ", s2, "s3 = ", s3,
         "strncmp(s1,s3,6) = ", strncmp(s1, s3, 6),
         "strncmp(s1,s3,7) = ", strncmp(s1, s3, 7),
         "strncmp(s3,s1,7) = ", strncmp(s3, s1, 7));

  return 0;
}

