#include <stdio.h>
#include <ctype.h>

int main(void)
{

       printf("%s\n%s%s\n%s%s\n\n", "De acordo com isdigit: ",
              isdigit('8') ? "8 e um " : "8 nao e um ", "digito",
              isdigit('#') ? "# e um " : "# nao e um ", "digito");

       printf("%s\n%s%s\n%s%s\n%s%s\n\n", "De acordo com isalpha: ",
              isalpha('8') ? "8 e um " : "8 nao e um ", "letra",
              isalpha('&') ? "& e um " : "& nao e um ", "letra",
              isalpha('B') ? "B e um " : "B nao e um ", "letra");

       printf("%s\n%s%s\n%s%s\n%s%s\n\n", "De acordo com isalnum: ",
              isalnum('8') ? "8 e um " : "8 nao e um ", "digito ou letra",
              isalnum('&') ? "& e um " : "& nao e um ", "digito ou letra",
              isalnum('B') ? "B e um " : "B nao e um ", "digito ou letra");

       printf("%s\n%s%s\n%s%s\n%s%s\n\n", "De acordo com islower: ",
              islower('P') ? "P e um " : "P nao e um ", "letra minuscula",
              islower('a') ? "a e um " : "a nao e um ", "letra minuscula",
              islower('B') ? "B e um " : "B nao e um ", "letra minuscula");
}