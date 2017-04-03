#include <stdio.h>
#include <stdlib.h>

int main(){

int edad, dn, mn, an, da, ma, aa;

printf("\nIngrese el dia de nacimiento: ");
scanf("%d", &dn);

printf("\nIngrese el mes de nacimiento: ");
scanf("%d", &mn);

printf("\nIngrese el anio de nacimiento: ");
scanf("%d", &an);

printf("\nIngrese el dia actual: ");
scanf("%d", &da);

printf("\nIngrese el mes actual: ");
scanf("%d", &ma);

printf("\nIngrese el a%co actual: ");
scanf("%d", &aa);

edad = aa-an;

if(ma<mn)
  {
   edad = edad-1;
   if(ma==mn && da<dn )
      {
       edad = edad-1;
       }

 }

printf("\nLa edad es: %d", edad);

getch();

}
