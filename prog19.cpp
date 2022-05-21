/* 
Autor: Franciscomilan
Realizado: 28/02/2022
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa 19 en C que el area de circulo y rectangulo.
El programa primero pregunta que figura  (1. Circulo, 2. Rectangulo) 
y despues pide los datos e imprime el resultado, usando funciones 
para la materia programacion estructurada  
*/

//Librerias
#include<stdio.h>
#include<math.h>
//Prototipos o cabeza de la funcion
void Circulo();
void rectangulo();
//Principal
int main() {
	int opcion;
	do {  
		printf(" Calculo de Areas\n");
		printf(" 0. Salir ");
		printf(" 1. Circulo\n");
		printf(" 2. Rectangulo\n");
		printf(" Selecciona una figura: ");
		scanf("%d", &opcion);
		switch(opcion) {
			case 1: Circulo();
				break;
			case 2: rectangulo();
				break;
			default: printf(" Opcion invalida !!!\n");
			}
		}while(opcion!=0);
		return 0;
}

//Funcion circulo
void Circulo(){
	//Variables locales
	float radio, area; 
	//Entrada de datos
	printf(" Introduce el radio: ");
	scanf("%f", &radio);
	//Proceso	
	area=M_PI*pow(radio,2);
	//Salida
	printf(" El area del circulo es %.2f\n", area);
}

//Funcion rectangulo
void rectangulo() {
	//Variables locales
	float base, h, area;
	//Entrada de datos
	printf(" Introduce la base: ");
	scanf("%f",&base);
	printf(" Introduce la altura: ");
	scanf("%f",&h);
	//Proceso
	area=base*h;
	//Salida de datos
	printf(" El area del rectangulo es %.2f\n",area);
}
