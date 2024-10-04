/*Gallegos Vazquez Mila
Laboratorio practica 8
tablas de multiplicar*/

#include <stdio.h>
#include <stdlib.h>

void mult_for(int n);
{
  int resp;
  
  for(i = 1; i <= 10; i++)
  {
    resp = n * i;
    printf("%d * %d = %d\n", n, i, resp);
  }
  return 0;
}

void main()
{
  int n;
  
  printf("Dame el numero de la tabla a multiplicar: ");
  scanf("%d", n);

  multi_for(n);
  return 0;
}
