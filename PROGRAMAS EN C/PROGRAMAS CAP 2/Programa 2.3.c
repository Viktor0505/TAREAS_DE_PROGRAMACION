#include <stdio.h>
/* promedio curso.
el programa, al recibir como datoel promedio de un alumno en un curso
universitario, escribe aprobado si su promedio es mayor o igual a 6, o 
reprobado en caso contrario.

PRO: variable de tipo real.    */

void main(void)
{
float PRO;
printf("ingrese el promedio del alumno: ");
scanf("%f", &PRO);
if (PRO >= 6.0)
	printf("\naprobado");
else 
	printf("\nreprobado");
	
}
