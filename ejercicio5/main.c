#include <stdio.h>
#include <stdlib.h>
#include "../Librerias/pila.h"
#include<conio.h>
#define ESC 27




/**
5. Insertar un elemento en una pila ordenada de menor (tope) a mayor (base) de forma tal que se conserve el orden.
 (sin variables enteras, solo pilas)
*/
int main()
{
    char o=0;
    int num,num1;
    Pila dada,aux1,dada2;

    inicpila(&dada);
    inicpila(&aux1);
    inicpila(&dada2);

    while(o!=27)
    {
        printf("Ingrese un numero \n\t");
        scanf("%d",&num);
        apilar(&dada,num);
        printf("Si desea salir presione ESCAPE sino cualquier tecla para continuar \n");
        fflush(stdin);
        o=getch();


    }
    system("cls");

    printf("Ingrese un numero \n\t");
    scanf("%d",&num1);
    apilar(&aux1,num1);




    while(!pilavacia(&dada))
    {

        while(!pilavacia(&aux1)){

        if(tope(&aux1)<tope(&dada))
        {

            apilar(&dada,desapilar(&aux1));
        }
        else
        {
            apilar(&dada2,desapilar(&dada));
        }
}
    apilar(&dada2,desapilar(&dada));
    }

    while(!pilavacia(&dada2)){


       apilar(&dada,desapilar(&dada2));
    }





    mostrar(&dada);




return 0;
}
