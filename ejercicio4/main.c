#include <stdio.h>
#include <stdlib.h>
#include "../Librerias/pila.h"
#include <conio.h>
#define ESC 27

/**
Encontrar el menor elemento de una pila y guardarlo en otra. (sin variables enteras, solo pilas)
*/


int main()
{
    Pila dada,aux,aux1;
    char o=0;
    int num;
    inicpila(&dada);
    inicpila(&aux);
    inicpila(&aux1);

    while(o!= 27)
    {
        printf("Ingrese un numero \n\t");
        scanf("%d",&num);
        apilar(&dada,num);
        printf("Si desea salir presione ESCAPE o cualquier tecla para continuar \n");

        fflush(stdin);
        o=getch();

    }
    system("cls");


    apilar(&aux,desapilar(&dada));

    while(!pilavacia(&dada))
    {

        if(tope(&dada)<tope(&aux))
        {
            apilar(&aux1,desapilar(&aux));
            apilar(&aux,desapilar(&dada));
        }
        else
        {
            apilar(&aux1,desapilar(&dada));

        }


    }
    printf("El menor numero es: \t %d",tope(&aux));
    mostrar(&aux);

    return 0;
}
