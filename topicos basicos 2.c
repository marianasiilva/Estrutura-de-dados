2)

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int nota01, nota02, nota03;
  float media;
  printf ("Digite a nota 1: " );
  scanf ("%d", & nota01);
  printf ("Digite a nota 2: " );
  scanf ("%d", & nota02);
  printf ("Digite a nota 3: " );
  scanf ("%d", & nota03);
  media = (nota01+nota02+nota03)/3;
  printf ("%f ", media);
  
  }
