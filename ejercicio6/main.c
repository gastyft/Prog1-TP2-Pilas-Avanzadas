#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "../Librerias/pila.h"
#define ESC 27

/**
Usando lo resuelto en el ejercicio 4, pasar los elementos de una pila a otra de forma tal que la segunda pila quede ordenada
de mayor (tope) a menor (base). Esto se llama método de ordenación por selección.
*/

int main()
{
        Pila dada,aux,aux1,ordenada;
    char o=0;
    int num;
    inicpila(&dada);
    inicpila(&aux);
    inicpila(&aux1);
    inicpila(&ordenada);

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

while(!pilavacia(&dada)){
    apilar(&aux,desapilar(&dada));

    while(!pilavacia(&dada)) ///compara los valores buscando el menor
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
          apilar(&ordenada,desapilar(&aux));

    while(!pilavacia(&aux1)){
        apilar(&dada,desapilar(&aux1));
    }

        }


mostrar(&ordenada);



    return 0;
}
