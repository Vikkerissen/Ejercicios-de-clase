//Calcular la suma, resta y multiplicación de los numeros ingresados.

#include <stdio.h>
#include <stdlib.h>

int main(){

int a, b, suma, resta, multi;

printf("\n1) Ingrese el valor de A: ");
scanf("%d", &a);

printf("\n2) Ingrese el valor de B: ");
scanf("%d", &b);

suma = a+b;
resta = a-b;
multi = a*b;

printf("\nEl resultado de la suma es: %d, el de la resta: %d y el de la multiplicacion: %d", suma, resta, multi);

getch();

}
