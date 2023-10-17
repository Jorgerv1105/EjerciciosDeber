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