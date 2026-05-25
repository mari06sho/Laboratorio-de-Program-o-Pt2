/* Programa de embaralhamento e distribuição de cartas usando estruturas */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct carta
{
  char *face;
  char *naipe;
};
typedef struct carta Carta;

/* protótipos */
void completaBaralho(Carta *wBaralho, char *wFace[], char *wNaipe[]);
void embaralhar(Carta *wBaralho);
void distribuir(const Carta *wBaralho);

int main(void)
{
  Carta baralho[52];

  char *face[] = {"As", "Dois", "Tres", "Quatro", "Cinco", "Seis",
                  "Sete", "Oito", "Nove", "Dez", "Valete", "Dama", "Rei"};

  char *naipe[] = {"Copas", "Ouros", "Paus", "Espadas"};

  srand((unsigned)time(NULL));

  completaBaralho(baralho, face, naipe);
  embaralhar(baralho);
  distribuir(baralho);

  return 0;
}

/* associa faces e naipes às 52 posições do baralho */
void completaBaralho(Carta *wBaralho, char *wFace[], char *wNaipe[])
{
  for (int i = 0; i < 52; ++i)
  {
    wBaralho[i].face = wFace[i % 13];
    wBaralho[i].naipe = wNaipe[i / 13];
  }
}

/* embaralhamento simples por trocas aleatórias */
void embaralhar(Carta *wBaralho)
{
  for (int i = 0; i < 52; ++i)
  {
    int j = rand() % 52;
    Carta temp = wBaralho[i];
    wBaralho[i] = wBaralho[j];
    wBaralho[j] = temp;
  }
}

/* imprime 52 cartas, duas por linha */
void distribuir(const Carta *wBaralho)
{
  for (int i = 0; i < 52; ++i)
  {
    printf("%-6s de %-8s%c",
           wBaralho[i].face,
           wBaralho[i].naipe,
           (i + 1) % 2 ? '\t' : '\n');
  }
}

