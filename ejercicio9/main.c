#include <stdio.h>
#include <stdlib.h>
#include "../Librerias/pila.h"
#include<conio.h>
#define ESC 27

///Verificar si una pila DADA es capicúa.


int main()
{
    char o=0;
    Pila dada,aux,aux1;

    int num;


    inicpila(&dada);
    inicpila(&aux);
    inicpila(&aux1);
    system("COLOR B");
    while(o!= 27)
    {

        printf("Ingrese un numero\n\t");
        scanf("%d",&num);
        apilar(&dada,num);
        printf("Si desea continuar presione cualquier tecla sino ESCAPE para salir\n");
        fflush(stdin);
        o=getch();

    }
    system("cls");


    while(!pilavacia(&dada))
    {
        apilar(&aux,desapilar(&dada));
        apilar(&aux1,desapilar(&dada));
        if(tope(&aux)==tope(&dada)){
            printf("La pila es capicua");
            break;
        }
        else{
            printf("La pila no es capicua");
            break;
        }
    }
    apilar(&dada,desapilar(&aux1));
    apilar(&dada,desapilar(&aux));

    mostrar(&dada);





    return 0;
}
