#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include"../Librerias/pila.h"
#define ESC 27

/**
Contar los elementos de una pila (usar variables enteras)
*/
int main()
{
         char o=0;
         Pila dada,aux;
         int num;
         inicpila(&dada);
         inicpila(&aux);

         while(o!=27){
            printf("Ingrese numero entero \n \t");
            scanf("%d",&num);

            apilar(&dada,num);
            printf("Si desea salir presione ESCAPE sino cualquier tecla para continuar \n");

            fflush(stdin);
            o=getch();

         }
                system("cls");
         int cont=0;
         while(!pilavacia(&dada)){

            cont+=1;
        apilar(&aux,desapilar(&dada));

         }

         printf("La cantidad de elementos es \n\t  %d",cont);


    return 0;
}
