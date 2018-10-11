#include <stdio.h>
#include <stdlib.h>
#include "propietario.h"


#define cantidad 20
#define tam 21
#define tarjeta 20

int altaPropietario(eDatos [], int);
int main()
{
    int opcion;
    int flag;
    eDatos saveDatos[cantidad];
    inicializarPropietario(saveDatos,cantidad);

    do{
        system ("cls");
        printf ("\nBienvenido");
        printf ("1. Dar de alta un propietario");
        printf ("elija una opcion");
        fflush (stdin);
        scanf("%d", &opcion);

        switch (opcion){
    case 1:
        menuPropietarios();
        flag=1;
        break;
        }
    }
    return 0;
}
int altaPropietario(eDatos[i], int cantidad)
{
    eDatos datoNuevo;
    int retorno =-1;
    int index;

    system ("cls");
    printf ("\nPropietario dado de alta");

    index= buscarEspacio (list, cantidad);

    if (index==-1){
        printf ("no existe espacio disponible")
    }
    else
    {
        getValidString("Ingrese el apellido: ",datoNuevo.apellido);
        getValidString("Ingrese el nombre: ",datoNuevo.nombre);


        getValidString("Ingrese su domicilio (sin espacios): ",datoNuevo.domicilio,);

        datoNuevo.IdPropietario=generarCodigo();//ID
        datoNuevo.isEmpty=0;
        retorno=0;

        list[index]=datoNuevo;

    }
    return retorno;
}
