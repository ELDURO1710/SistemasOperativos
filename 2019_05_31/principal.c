#include <stdio.h>
#include "entero.h"

int main(int argc, char** argv) {
  entero a,b;

  a = 5;
  b = 6;
  printf("la resta de %d y %d es %d\n",a,b,resta(a,b));
  printf("y su multiplicacion es %d\n",multiplicacion(a,b));
  printf("ah pero si los divides te da %f\n",(float)division(a,b));
}

