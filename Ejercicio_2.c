//13. Leer un entero y mostrar todos los múltiplos de 5 comprendidos entre 1 y el número leído.
//Trejos Buriticá, O. I. (2017). Lógica de programación. Bogotá, Colombia: Ediciones de la U. Recuperado de https://elibro.net/en/ereader/udla/70315?page=228.
#include <stdio.h>

int main(void) {
//Inicializacion de las variables
  int numero;
//Damos un mensaje inicial para dar un valor a nuestra variable
 printf("Programa que muestra los números múltiplos de 5\n");
  printf("Ingrese un número: ");
  scanf("%i", &numero);
//Creamos el bucle hasta que se cumpla la condicion mostrada y varios parametros
  for (int i = 1; i <= numero; i++) {
    if (i % 5 == 0) {
      printf("El número %i es múltiplo de 5\n", i);
    }
  }
  printf("\nGracias por utilizar el programa");
  return 0;
}