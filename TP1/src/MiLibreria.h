#ifndef MILIBRERIA_H_
#define MILIBRERIA_H_

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

/** \brief OBTIENE UN NUMERO DECIMAL
 *
 * \param float NUMERO
 * \param const char MENSAJE PARA PEDIR EL NUMERO
 * \return int ESTADO DEL NUMERO
 *
 */

int     GetFloat    (float* Salida, const char* MSG);

/** \brief SUMA DOS NUMEROS
 *
 * \param float OPERANDO UNO
 * \param float OPERANDO DOS
 * \return float RESULTADO SUMA
 *
 */
float suma (float a, float b);

/** \brief RESTA DOS NUMEROS
 *
 * \param float OPERANDO UNO
 * \param float OPERANDO DOS
 * \return float RESULTADO RESTA
 *
 */
float resta(float a, float b);

/** \brief DIVISION DOS NUMEROS
 *
 * \param float OPERANDO UNO
 * \param float OPERANDO DOS
 * \return float RESULTADO DIVISION
 *
 */
float division (float a, float b);

/** \brief MULTIPLICA DOS NUMEROS
 *
 * \param float OPERANDO UNO
 * \param float OPERANDO DOS
 * \return float RESULTADO MULTIPLICACION
 *
 */
float multiplicacion(float a, float b);

/** \brief APLICA FACTORIAL A UN UNICO VALOR ENTERO Y VERIFICA QUE SEA MAYOR DE 1
 *
 * \param int OPERADOR AL QUE SE LE APLICA EL FACTORIAL
 * \return unsigned long int RESULTADO DE FACTORIAL, ENTERO SIN SIGNO LARGO
 *
 */
unsigned long int factorial(int a);


#endif /* MILIBRERIA_H_ */
