#include <stdio.h>
#include <stdlib.h>
#include"../Librerias/pila.h"

/**
Dadas dos pilas A y B que simulan conjuntos (cada conjunto no tiene elementos repetidos sobre sí mismo),
 realizar un programa que calcule en la pila C la operación de unión.
A : base 1 2 3  tope
B: base 2 3 5 7 tope
Pila AUB = base 3 2 1 7 5 tope

*/
int main()
{
    Pila A,B,C,aux,aux1;
    inicpila(&C);
    inicpila(&A);
    inicpila(&B);
    inicpila(&aux);
    inicpila(&aux1);
    apilar(&A,1);
    apilar(&A,2);
    apilar(&A,3);

    apilar(&B,3);
    apilar(&B,2);
    apilar(&B,1);
    apilar(&B,7);
    apilar(&B,5);


    while(!pilavacia(&A))
    {
        while(!pilavacia(&B))
        {
            if(tope(&A)!=tope(&B))
            {
                apilar(&C,desapilar(&B));
            }
            else
            {
                desapilar(&B);
            }
        }
        apilar(&C,desapilar(&A));
        while(!pilavacia(&C))
        {
            apilar(&B,desapilar(&C));
        }

    }

    while(!pilavacia(&B))
    {
        apilar(&C,desapilar(&B));

    }
    while(!pilavacia(&A))
    {
        apilar(&C,desapilar(&A));
    }

    mostrar(&C);

    return 0;
}
