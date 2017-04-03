#include <stdio.h>
#include <stdlib.h>

int main(){

int nota1, nota2;

printf("\n1) Ingrese la nota del parcial 1: ");
scanf("%d", &nota1);

printf("\n1) Ingrese la nota del parcial 2: ");
scanf("%d", &nota2);

if(nota1>=7&&nota2>6){
    printf("\nPROMOCIONO");
}
else if(nota1<4||nota2<4){
            printf("\nRECURSO");
        }
        else{
            printf("\nCURSO");
        }

getch();

}





