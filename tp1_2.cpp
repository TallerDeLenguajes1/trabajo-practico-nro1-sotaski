#include <stdio.h>
#include <stdlib.h>


int cuadrado (int num);//1° items
void cubo(int num);//2° items
void invertir(int *ain, int *bin);// 4 items
void ordenar(int *ain, int *bin);// 5to items

 int main()
{
	int num;
	int vbl=0;// variable para mostrar
	int a,b;
	int *ain,*bin;// a inverso y b inverso
	printf("Ingrese un numero: \n");
	scanf("%d", &num);
	vbl = cuadrado(num);
	printf("\nLa direccion de memoria de la variable es:%p\n", &num );
	printf("\nEl numero ingresado es:%d\n",num );
	printf("Numero al cuadrado: %d \n", vbl);//1° items
	cubo(num);//2° items
	//cuarto items
	printf("Ingrese un numero:\n");
	scanf("%d", &a);
	printf("Ingrese un segundo numero:\n");
	scanf("%d", &b);
	ain=&a;
	bin=&b;
	invertir(ain, bin);
	printf("Numero invertido de a con b: %d \n", a);//mostramos el numero invertido de a con b
	printf("Numero invertido de b con a: %d \n", b);//mostramos el numero invertido de b con a
	ordenar(ain, bin);

	return 0;
}

int cuadrado(int num){//1° items
	num=num*num;
	return num;
}

void cubo(int num){//2° items
	//int most //variable para mostrar resultado
	num=num*num*num;
	printf("Numero al cubo es: %d \n", num);
}
void invertir (int *ain, int *bin){
	int i;//variable auxiliar nos ayudara a dar invertir los numeros
	i=*ain;
	*ain=*bin;
	*bin=i;
}
void ordenar(int *ain, int *bin){
	int recuperar_a, recuperar_b;
	recuperar_a=*ain;
	
	if (*ain<*bin)
	{
		*ain=*bin;
		*bin=recuperar_a;
		printf("el segundo numero es el mayor: %d \n", *ain);

		printf("el menor es el primero: %d \n", *bin);
	}
	else if (*ain>*bin)
	{
		printf("el primero primer es el mayor: %d \n", *ain);
		printf("el menor es el segundo: %d \n", *bin);
	}

}