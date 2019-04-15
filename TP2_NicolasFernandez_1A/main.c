#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"
#include <string.h>

typedef struct
{
    char nombre [20];
    char apellido [20];
    int salario;
    int sector;
    int legajo;
    int estaOcupado;

}ePersona;


int main()
{
    int menuOpciones;
    char respuesta;

    scanf("%d", &menuOpciones);

    do
    {
        mostrarMenu();

        switch (menuOpciones)
        {
            case 1:

                //printf("\nAlta de Empleados: \n\n");

                altaEmpleados();

                limpiarBuffer();

                system("pause");

                break;

            case 2:

                printf("\nBaja de Empleados: \n\n");

                limpiarBuffer();

                system("pause");

                break;

            case 3:

                printf("\n Modificacion de Empleados: \n\n");

                limpiarBuffer();

                system("pause");

                break;

            case 4:

                printf("\nOrdenar Empleados: \n\n");

                limpiarBuffer();

                system("pause");

                break;


            case 5:

                printf("\nListar Empleados: \n\n");

                limpiarBuffer();

                system("pause");

                break;

            case 6:

                printf("\nSalir\n\n");

                break;

            default:

                printf("\nLa opcion elegida es incorrecta\n\n");

                break;
        }

        do
        {
            printf("\nContinuar [S/N]:?");

            limpiarBuffer();

            scanf("%c", &respuesta);

            respuesta = toupper(respuesta);

            limpiarPantalla();

        } while (respuesta != 'S' && respuesta != 'N');

    } while (respuesta == 'S');

    return 0;
}
