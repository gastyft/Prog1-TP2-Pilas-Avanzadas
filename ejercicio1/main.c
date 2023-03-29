#include <stdio.h>
#include <stdlib.h>
#include "../Librerias/Librerias/pila.h"
#include<conio.h>
#define ESC 27

 /**Sumar los elementos de una pila (usar variables enteras)

 */
int main()
{
 char op ;
    Pila dada,aux;
    inicpila(&aux);
    inicpila(&dada);
  int suma=0;
    int num , num1;

    while(op != 27){
        printf("Ingrese numero entero\n");
        scanf("%d",&num);
        apilar(&dada,num);


        printf("Si desea salir presione ESCAPE sino presione cualquier tecla para continuar \n");

        fflush(stdin);
        op =getch();
    }
     mostrar(&dada);
    while(!pilavacia(&dada)){

        num1 = tope(&dada);
        suma+= num1;

        apilar(&aux,desapilar(&dada));

    }

    printf("La suma es %d",suma);



    return 0;
}

