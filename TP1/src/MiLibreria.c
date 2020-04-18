#include "MiLibreria.h"

int GetFloat (float* Salida, const char* MSG)
{
    char buffer[4096];
    int contadorPuntos = 0;
    int rtn = 1;

    printf(MSG);
    fflush(stdin);
    gets(buffer);

    for(int i = 0; i < strlen(buffer); i++)
    {
        if(i == 0 && buffer[0] == '-')
        {
            continue;
        }
        else
        {
            if(isdigit(buffer[i]) && contadorPuntos <= 1)
            {
                continue;
            }
            else
            {
                if(buffer[i] == '.' && contadorPuntos == 0)
                {
                    contadorPuntos++;
                    continue;
                }
                else
                {
                    rtn = 0;

                    break;
                }
            }
        }
    }

    *Salida = atof(buffer);

    return rtn;
}

float suma (float a, float b)
{
    float resSuma;
    resSuma = a+b;
    return resSuma;
}

float resta(float a, float b)
{
    float rdo;

    rdo = a-b;

    return rdo;
}

float division (float a, float b)
{
    float resDivision;

    /**
    VERIFICACION DE DIVISION POR CERO
        if (b==0)
        {
            printf("%c NO SE PUEDE DIVIDIR POR CERO\n\n",158);
        }*/

    resDivision = (float)a/b;
    return(resDivision);
}

float multiplicacion(float a, float b)
{
    float rdo;

    rdo = a*b;

    return rdo;
}

unsigned long int factorial(int a)
{
    unsigned long int resFactorial;
    while(a>=1)
    {
        if(a==1)
            return 1;
        resFactorial=a* factorial(a-1);
        return (resFactorial);
    }
    return 0;
}
