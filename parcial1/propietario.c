#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "propietario.h"

static int generarCodigoPropietario()
{
    static int codigoPropietario=999;
    codigoPropietario++;
    return IdPropietario;
}

int inicializarPropietario(eDatos* list, int cantidad)
{
    int retorno=0;

    if(list==NULL)
    {
        if(cantidad<=0)
        {
            retorno = -1;
        }
    }
    for(int i=0; i<cantidad; i++)
    {
        list[i].isEmpty = 1;
    }

    return retorno;
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
        getValidString("ingrese el codigo ID", datoNuevo.IdPropietario)

        getValidString("Ingrese su numero de tarjeta : ",datoNuevo.numeroTarjeta);

        datoNuevo.IdPropietario=generarCodigo();
        datoNuevo.isEmpty=0;
        retorno=0;

        list[index]=datoNuevo;

    }
    return retorno;
}
int buscarPropietarioPorCodigo(eDatos list[], int cantidad, int codigoPropietario)
{
    int retorno=-1;

    for(int i=0; i<cantidad; i++)
    {
        if(list[i].IdPropietario==codigoPropietario)
        {
            retorno=i;
            break;
        }
    }
    return retorno;
}

int modificarCliente(eCliente list[], int len)
{
    int IdPropietario;
    int retorno=-1;
    int found;
    char modificar;
    int opcion=0;

    system("cls");
    printf("  *** Modificacion Propietario ***\n\n");

    getValidInt("Ingrese el codigo del Propietario que desea modificar\n",&IdPropietario,1000,9999999);

    found=buscarPropietarioPorCodigo(list,cantidad,saveDatos);

    if(found == -1)
    {
        printf("Propietario no encontrado\n");
    }
    else
    {
        mostrarPropietario(list[found]);

        getValidString("¿Esta seguro de que quiere modificar este Propietario? s/n\n",&modificar);

        if(modificar=='s')
        {
            printf("--MENU--\n\n");
            printf("1- Apellido \n");
            printf("2- Nombre \n");
            printf("3- Direccion\n");
            printf("4- Numero de Tarjeta\n");
            printf("5- Salir\n\n");
            fflush(stdin);
            scanf("%d",&opcion);

            switch(opcion)
            {
            case 1:
                getValidString("Ingrese el apellido: \n",list[found].apellido,3,50);
                break;
            case 2:
                getValidString("Ingrese el nombre: \n",list[found].nombre,3,50);
                break;
            case 3:
                getValidSexo("Ingrese la direccion: \n",&list[found].direccion);
                break;
            case 4:
                getValidString("Ingrese su tarjeta: ",list[found].numeroTarjeta);
                break;
            case 5:
                opcion=5;
                retorno=0;
                break;
            default:
                printf("Opcion incorrecta: \n");
                system("pause");
                break;
            }
            printf("Modificacion completada\n\n");
        }
        else
        {
            printf("Modificacion cancelada\n\n");
        }
    }
    return retorno;
}
int mostrarDatos(eDatos list[], int cantidad)
{
    printf("ID\tNOMBRE\tAPELLIDO\tSEXO\tDOMICILIO\n\n");
    for(int i=0; i<cantidad; i++)
    {
        if(!list[i].isEmpty)
        {
            mostrarCliente(list[i]);
        }
    }
    return 0;
}

int menuPropietarios()
{

    int opcion=0;
    int contador=0;

    eDatos saveDatos[cantidad];
    inicializarCliente(cliente,cantidad);

    do{
        system("pause");
        system("cls");
        printf("--MENU Propietarios--\n\n");
        printf("1- ALTA\n");
        printf("2- MODIFICACION\n");
        printf("3- BAJA\n");
        printf("4- LISTAR\n");
        printf("5- SALIR\n\n");
        fflush(stdin);
        scanf("%d",&opcion);
    }
    switch (opcion){
case 1:
    datoNuevo (saveDatos, cantidad);
    contador++;
    break;
case 2:
    if (contador==0){
        printf ("no existen datos ingresados");
    }
    }
