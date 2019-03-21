#include <stdio.h>
#include <stdlib.h>



 int main()
{
	int *p;
	int n=30;
	p=&n;
	printf("El contenido del puntero es: %d", *p);
	printf("\nLa dirección de memoria almacenada por el puntero es: %p", p);
	printf("\nLa dirección de memoria de la variable es: %p", &n);
	printf("\nLa dirección de memoria de del puntero es: %p", &p);
	printf("\nTamaño de la memoria utilizada por la variable: %d", sizeof(n) );
	/* Si resolvió correctamente los puntos 2 y 3 notará que el resultado
		es el mismo. ¿a qué se debe? 
		RTA: ES EL MISMO RESULTADO POR QUE EL PUNTERO GUARDA LA DIRECCION 
		DE MEMORIA VARIABLE APUNTADA
	  ¿Qué obtiene en el punto 4? ¿es igual a los anteriores? ¿por qué?
	  	RTA: OBTENGO LA DIRECCION DE MEMORIA DEL PUNTERO. NO ES IGUAL A LOS
	  	ANTERIORES POR QUE AL ASIGNAR UN PUNTERO DE CUALQUIER TIPO AUTOMATICAMENTE 
	  	TIENE UN ESPACIO DE MEMORIA RESERVADO*/

	return 0;
}