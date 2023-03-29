#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include "../Librerias/pila.h"
#define ESC 27


/**
Calcular el promedio de los valores de una pila (usar variables)
*/




int main()
{
    char o=0;
    Pila dada,aux;
    int num;


    inicpila(&dada);
    inicpila(&aux);

    while(o!=27)
    {
        printf("Ingrese un numero \n\t");
        scanf("%d",&num);

        apilar(&dada,num);

        printf("Si desea continuar presione cualquier tecla o ESCAPE para salir \n");
        fflush(stdin);
        o=getch();


    }
    system("cls");

     int cont=0,suma=0;

    while(!pilavacia(&dada)){
        suma+=tope(&dada);

        apilar(&aux,desapilar(&dada));
        cont+=1;
    }

    printf("El promedio es: %.2f \n \t ",(float)suma/cont); //CASTEO (float) adelante de la expresion


    return 0;
}
