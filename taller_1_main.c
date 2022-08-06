/*************************************************
*Fecha: 28-julio-2022
*Autor: Juan Pablo Barrios Suarez
*Materia: Parallel and Distribuited Computing
*Tema: Primer Taller en C
*Tòpico: Módulo principal de métodos desarollados en lenguaje C
**************************************************/

#include "taller_1_lib.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	bool loopCheck=true;
	int opc, loop;
	/*Inicio*/
	begin();
	do{
		/*Impresión del menú con los métodos disponibles*/
		menu();
		printf("\n\t\t>> ¿Qué método deseas ejecutar? : ");
		scanf("%d",&opc);
		
		switch(opc){
			case 1:
				productoDeDosEnteros();
				break;
			
			case 2:
				conversionDeDias();
				break;
			
			case 3:
				distanciaEntrePuntos();
				break;
			
			case 4:
				primeros10Numeros();
				break;
			
			case 5:
				triangulo();
				break;
			
			case 6:
				matrizRellenaDeUnos();
				break;
			
			case 7:
				matrizRellenaDeNumerosAleatorios();
				break;
			
			case 8:
				sumaDeMatrices();
				break;
			
			case 9:
				restaDeMatrices();
				break;
			
			case 10:
				productoDeMatrices();
				break;
			
			default:	
				printf("\n\t-<< OPCIÓN NO VÁLIDA >>\n");
				break;
		}
		
		printf("\n\t-> ¿Deseas volver a ejecutar algún otro método? Digita 1 para continuar, cualquier otro número para salir: ");
		scanf("%d",&loop);
		
		if(loop!=1) loopCheck=false;
	
	}while(loopCheck);
	
	printf("\n\t ¡¡¡¡Gracias, vuelve pronto !!!!\n\n");
	return 0;
}
