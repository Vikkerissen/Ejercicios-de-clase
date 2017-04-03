//Dados 3 números enteros, mostrar la suma y mostrar la multiplicación. 

#include <stdio.h>
#include <stdlib.h>

int main(){

int num1, num2, num3, sum, mult;

printf("\nIngrese el primer numero: ");
scanf("%d", &num1);

printf("\nIngrese el segundo numero: ");
scanf("%d", &num2);

printf("\nIngrese el tercer numero: ");
scanf("%d", &num3);

sum = num1+num2+num3;
mult = num1*num2*num3;

printf("\nLa suma de los numeros es: %d", sum);
printf("\nLa multiplicacion de los numeros es: %d", mult);

getch();

}
