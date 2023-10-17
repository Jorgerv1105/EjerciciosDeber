//22. Leer un número entero y determinar cuántas veces tiene el dígito 1.
//Trejos Buriticá, O. I. (2017). Lógica de programación. Bogotá, Colombia: Ediciones de la U. Recuperado de https://elibro.net/en/ereader/udla/70315?page=228.
#include <stdio.h>

int main(void) {
//Inicializacion de las variables
  int numero, contador;
contador = 0;
//Damos un mensaje inicial para dar un valor a nuestra variable
  printf("Ingrese un número: ");
  scanf("%i", &numero);

  int originalNumero = numero;