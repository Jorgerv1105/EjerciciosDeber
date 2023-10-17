//31. Leer números hasta que digiten 0 y determinar a cuánto es igual el promedio de los números terminados en
//Trejos Buriticá, O. I. (2017). Lógica de programación. Bogotá, Colombia: Ediciones de la U. Recuperado de https://elibro.net/en/ereader/udla/70315?page=229.

#include <stdio.h>
//Inicializacion de las variables
int main(void) {
  int numero, contador = 0, suma = 0, promedio = 0, terminadosEn5 = 0;
//Damos un mensaje inicial para dar un valor a nuestra variable
  printf("Ingrese números (ingrese 0 para finalizar):\n");
//Creamos el bucle hasta que se cumpla la condicion mostrada y varios parametros
  do {
    scanf("%i", &numero);
if (numero != 0) {
      suma += numero;
      contador++;

      if (numero % 10 == 5) {
        printf("El número %i termina en 5.\n", numero);
        terminadosEn5++;
      }
    }
  } while (numero != 0);
if (contador > 0) {
    promedio = suma / contador;
    printf("Promedio de los números ingresados: %i\n", promedio);

    if (terminadosEn5 > 0) {
      printf("Se ingresaron %i números terminados en 5.\n", terminadosEn5);
    } else {
      printf("No se ingresaron números terminados en 5.\n");
    }
  } else {
    printf("No se ingresaron números válidos.\n");
  }
    printf("\nGracias por utilizar el programa");
  return 0;
}