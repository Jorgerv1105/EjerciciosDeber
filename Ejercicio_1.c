//4. Leer dos números y mostrar todos los enteros comprendidos entre ellos.
//Trejos Buriticá, O. I. (2017). Lógica de programación. Bogotá, Colombia: Ediciones de la U. Recuperado de https://elibro.net/en/ereader/udla/70315?page=227.
#include <stdio.h>

int main(void) {
//Inicializacion de las variables
  int a, b, i;
//Damos un mensaje inicial para dar un valor a nuestra variable
  printf("Programa para desplegar los numeros comprendidos entre dos numeros\n");
  printf("Ingrese el primer numero: ");
  scanf("%i", &a);
  printf("Ingrese el segundo numero: ");
  scanf("%i", &b);
//Creamos el bucle hasta que se cumpla la condicion mostrada y varios parametros
  if (a > b) {
    for (i = --a; i > b; i--) {
      printf("El resultado es: %i\n", i);
    }
  } else {
    for (i = ++a; i < b; i++) {
      printf("El resultado es: %i\n", i);
    }
  }
  return 0;
}
