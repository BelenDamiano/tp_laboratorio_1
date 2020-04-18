/*
 ============================================================================
 Name        : TP1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "MiLibreria.h"

int main()
{
    int opcion;
    float operando1 = 0;
    float operando2 = 0;
    float bufferOp1;
    float bufferOp2;
    float rdoSuma, rdoResta, rdoDivision, rdoMultiplicar;
    unsigned long int resFactorialA, resFactorialB;

    do
    {
    	setbuf(stdout, NULL);

        system("cls");
        printf("=====================");
        printf(" CALCULADORA ");
        printf("=====================");
        printf("\n\n 1 - Ingresar 1er operando (A=%.2f)\n",operando1);
        printf(" 2 - Ingresar 2do operando (B=%.2f)\n\n",operando2);
        printf(" 3 - Calcular todas las operaciones\n");
        printf("\n  a - Calcular la suma (A+B)\n");
        printf("\n  b - Calcular la resta (A-B)\n");
        printf("\n  c - Calcular la division (A/B)\n");
        printf("\n  d - Calcular la multiplicacion (A*B)\n");
        printf("\n  e - Calcular el factorial (A!)\n\n");
        printf(" 4 - Informar Resultados\n\n");
        printf(" 0 - Para Salir.\n\n");
        printf("\nOPCION: ");
        fflush(stdin);
        scanf("%d", &opcion);


        switch(opcion)
        {
        case 0:
            puts("SALIENDO DE LA CALCULADORA.\n\n");

            break;
        case 1:                 //ingreso operando 1

            if(GetFloat(&bufferOp1,"Operador 1: ")==1)
            {
                operando1 = bufferOp1;
            }
            else
            {
                printf("Numero ingresado Invalido, por favor, reingrese Operando A\n\n");

            }
            system("pause");
            break;
        case 2:                 //ingreso operando 2

            if(GetFloat(&bufferOp2,"Operador 2: ")==1)
            {
                operando2 = bufferOp2;
            }
            else
            {
                printf("Numero ingresado Invalido, por favor, reingrese Operando B\n\n");

            }
            system("pause");
            break;
        case 3:

            rdoSuma = suma(operando1,operando2);
            rdoResta = resta(operando1,operando2);
            rdoDivision = division(operando1,operando2);
            rdoMultiplicar = multiplicacion(operando1,operando2);
            resFactorialA = factorial(operando1);
            resFactorialB = factorial(operando2);

            printf("Se realizaron todos los calculos para A %.2f y B %.2f\n\n", operando1, operando2);

            system("pause");
            break;
        case 4:

            system("cls");
            //SUMA
            printf("El Resultado de A+B es: %.2f\n\n", rdoSuma);
            //RESTA
            printf("El Resultado de A-B es: %.2f\n\n", rdoResta);
            //DIVISION
            if (operando2==0)
            {
                printf("No se puede realizar division con divisor = 0.\n\n");
            }
            else
            {
                printf("El Resultado de A-B es: %.2f\n\n", rdoDivision);
            }
            // MULTIPLICAR
            printf("El Resultado de A*B es: %.2f\n\n", rdoMultiplicar);

            //FACTORIAL DE A
            if (operando1<1)  /**VERIFICA QUE EL ENTERO SEA MAYOR A 0, SI NO ES ASI, IMPRIME EN PANTALLA EL ERROR*/
            {
                printf("El factorial de |A|, no aplica, el operando es menor a 1\n\n");
            }
            else if (operando1>16)
            {
                printf("El factorial de |A| no se aplica, el resultado es muy grande. Maximo 16\n\n");
            }
            else
            {
                printf("El resultado del factorial de |A| es: %ld\n\n", resFactorialA);
            }
            //FACTORIAL DE B
            if (operando2<1)  /**VERIFICA QUE EL ENTERO SEA MAYOR A 0, SI NO ES ASI, IMPRIME EN PANTALLA EL ERROR*/
            {
                printf("El factorial de |B|, no aplica, el operando es menor a 1\n\n");
            }
            else if (operando2>16)
            {
                printf("El factorial de |A| no se aplica, el resultado es muy grande. Maximo 16\n\n");
            }
            else
            {
                printf("El resultado del factorial de |B| es: %ld\n\n", resFactorialB);
            }

            system("pause");
            break;

        default:
            puts("OPCION INCORRECTA, REINGRESE SU OPCION.\n\n");
            system("pause");
            break;
        }

    }
    while (opcion != 0);

    return 0;
}

