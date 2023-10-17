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
//Creamos el bucle hasta que se cumpla la condicion mostrada y varios parametros
  while (numero > 0) {
    if (numero % 10 == 1) {
      contador++;
    }
    numero /= 10;
  }

  printf("El número %i tiene %i dígitos '1'.\n", originalNumero, contador);

  printf("\nGracias por utilizar el programa");
  return 0;
}