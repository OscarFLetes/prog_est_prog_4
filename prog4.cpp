/* Autor: Oscar Eduardo Fletes Ixta, Realizado: 03/02/2022
	Programa que calcula el area de un circulo
	Programa en lenguaje c que muestra el uso de:
		-Declaracion de variables 
		-Variables del tipo flotate
		-scanf
		-Operacones aritmeticas 
		-printf para monstrar los valroes de las variables
	Objetivo:
	Mostrar el uso de variables flotantes, como declararlas, pedirlas por teclado,
	realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa pide como entrada 1 variable de tipo flotante (area del circulo),
	calcula el area del circulo, e imprime el resultado. 
	*/
	
#include<stdio.h>
#include<math.h>
int main(){
	//Variables
	float r,a; //variable con decimal
	//Entrada
	printf("Introduce el radio del circulo: "); //imrpime mensaje
	scanf("%f",&r); //lee el numero insertado por el teclado
	//Proceso
	a=M_PI*pow(r,2); //Ecuacion 
	//salida
	printf("El area del circulo es %f",a); //imrpime mensaje salida
	
	return 0;
}
