#include <stdio.h>
#include <stdlib.h>

int main(void)
{
       double d;
       int i;
       long l;

       d = atof("99.0");
       i = atoi("2593");
       l = atol("10000000");

       printf("%s%.3f\n%s%.3f\n", "A string \"99.0\" convertida em double e ", d,
              "O valor convertido divido por 2 e ", d / 2.0);

       printf("%s%d\n%s%d\n", "A string \"2593\" convertida em int e ", i,
              "O valor convertido menos 593 e ", i - 593);

       printf("%s%d\n%s%d\n", "A string \"1000000\" convertida em long int e ", l,
              "O valor convertido dividido por 2 e ", l / 2);

       return 0;
}