#include <stdio.h>
#include <stdlib.h>

int main(void)
{
       char *string = "51.2% foram admitidos";
       char *stringPtr;
       char *string1 = "-1234567 abc";

       double d;
       int i;
       long l;

       d = strtod(string, &stringPtr);
       printf("%s%.3f\n%s%.3f\n", "A string convertida em double e ", d,
              "O valor convertido divido por 2 e ", d / 2.0);

       l = strtol(string1, &stringPtr, 0);

       printf("%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
              "A string original e ", string1,
              "O valor convertido e ", l,
              "O restante da string original e", stringPtr,
              "O valor convertido mais 567 e ", l + 567);

       return 0;
}
