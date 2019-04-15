#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"
#include <string.h>

void limpiarPantalla()
{
    system("cls");
}


void limpiarBuffer()
{
    fflush(stdin);
}


void mostrarMenu()
{
        printf("                                             >-----------------------------<\n");
        printf("                                             |     * Trabajo Practico 2    |\n");
        printf("                                             |     * Nicolas Fernandez     |\n");
        printf("                                             |     * Division: 1A          |\n");
        printf("                                             >-----------------------------<\n\n");

        printf("                                                  >===================< ");
        printf("                                                  | Menu de Opciones: | ");
        printf("                                                  >===================< ");

        printf("\n\n1- Altas de Empleado\n\n2- Baja de Empleado \n\n3- Modificacion de Empleado\n\n4- Ordenar Empleados \n\n5- Listar Empleados \n\n6- Salir \n\n");

        printf("Ingrese una opcion: ");
}


void altaEmpleados (ePersonas vecEmpleados[4], int contador)
{
    printf("                                                 >-----------------------------<\n");
    printf("                                                 |      * Altas Empleados      |\n");
    printf("                                                 >-----------------------------<\n\n");

    printf("                                                      >===================< ");
    printf("                                                      | Menu de Opciones: | ");
    printf("                                                      >===================< ");


    int contador = 0;

    struct ePersonas vecEmpleados [4];

    for (i = 0; i < 1000; i++)
    {
        limpiarBuffer();
        printf("\nNombre: ");
        gets(vecEmpleados[i].nombre);

        limpiarBuffer();
        printf("\nApellido: ");
        gets(vecEmpleados[i].apellido);

        limpiarBuffer();
        printf("\nSalirio: ");
        scanf("%d", &vecEmpleados[i].salario);

        limpiarBuffer();
        printf("\nSector: ");
        scanf("%d", &vecEmpleados[i].sector);
    }
}

void mostrarePersonas()
{
     for (i = 0; i < 1000; i++)
    {
        printf("El nombre de la persona es: %s ", vecEmpleados[i].nombre);
        printf("El apellido de la persona es: %s ", vecEmpleados[i].apellido);
        printf("El salirio de la persona es: %d ", vecEmpleados[i].salario);
        printf("El sector de la personas es: %d ", vecEmpleados[i].sector);
    }
}

int autoIncremental(nuestroContador)
{
    return nuestroContador + 1;
}


/*
void bajaEmpleado()
{
    printf("                                                 >-----------------------------<\n");
    printf("                                                 |      * Bajas de Empleados   |\n");
    printf("                                                 >-----------------------------<\n\n");

    printf("                                                      >===================< ");
    printf("                                                      | Menu de Opciones: | ");
    printf("                                                      >===================< ");
}

void modificacionEmpleado()
{
    printf("                                                >-------------------------------<\n");
    printf("                                                |  * Modificacion de Empleados  |\n");
    printf("                                                >-------------------------------<\n\n");

    printf("                                                      >===================< ");
    printf("                                                      | Menu de Opciones: | ");
    printf("                                                      >===================< ");
}

void ordenarEmpleados()
{
    printf("                                                 >-----------------------------<\n");
    printf("                                                 |      * Ordenar Empleados   |\n");
    printf("                                                 >-----------------------------<\n\n");

    printf("                                                      >===================< ");
    printf("                                                      | Menu de Opciones: | ");
    printf("                                                      >===================< ");
}

void listarEmpleados()
{
    printf("                                                 >-----------------------------<\n");
    printf("                                                 |    * Listar Empleados       |\n");
    printf("                                                 >-----------------------------<\n\n");

    printf("                                                      >===================< ");
    printf("                                                      | Menu de Opciones: | ");
    printf("                                                      >===================< ");
}
*/
