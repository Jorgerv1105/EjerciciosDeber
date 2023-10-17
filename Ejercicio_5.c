//40. Leer un número de dos dígitos y determinar si pertenece a la serie de Fibonacci.
//Trejos Buriticá, O. I. (2017). Lógica de programación. Bogotá, Colombia: Ediciones de la U. Recuperado de https://elibro.net/en/ereader/udla/70315?page=230.
#include <stdio.h>
//Inicializacion de variables 
int main() {
    int numero, a = 0, b = 1, c;
//Damos un mensaje inicial para dar un valor a nuestra variable
    printf("Ingrese un número de dos dígitos: ");
    scanf("%d", &numero);
  if (numero <= 10 || numero >= 99) {
      printf("%d No es un numero de dos digitos \n", numero);
      return 0;
  }
  // Verificar si el número es igual a 0 o 1 (casos especiales)
    if (numero == 0 || numero == 1) {
        printf("%d pertenece a la serie de Fibonacci.\n", numero);
        return 0;
    }
// Generar la serie de Fibonacci y verificar si el número está en ella
    while (a + b <= numero) {
        c = a + b;
        if (c == numero) {
            printf("%d pertenece a la serie de Fibonacci.\n", numero);
            return 0;
        }
        a = b;
        b = c;
    }

    printf("%d no pertenece a la serie de Fibonacci.\n", numero);

    printf("\nGracias por utilizar el programa");
    return 0;
}