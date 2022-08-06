/*************************************************
*Fecha: 28-julio-2022
*Autor: Juan Pablo Barrios Suarez
*Materia: Parallel and Distribuited Computing
*Tema: Primer Taller en C
*Tòpico: Biblioteca con los diferentes métodos disponibles para el taller
**************************************************/


#include "taller_1_lib.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void begin(){
	printf("\t##################################################\n");
	printf("\t##                                              ##\n");
	printf("\t##     Funciones con enteros y matrices en C    ##\n");
	printf("\t##                                              ##\n");
	printf("\t##################################################\n");
}

void menu(){
	printf("\t__________________________________________________\n");
	printf("\t [1] Producto entre dos enteros\n");
	printf("\t [2] Convertir un número de días a años, semanas y días\n");
	printf("\t [3] Calcular la distancia entre dos puntos\n");
	printf("\t [4] Imprimir los primeros 10 números naturales\n");
	printf("\t [5] Dibujar un triángulo a través de asteriscos\n");
	printf("\t [6] Matriz de NxN rellena de unos\n");
	printf("\t [7] Matriz de NxN rellena de números aleatorios\n");
	printf("\t [8] Matriz de NxN creada a partir de la suma entre dos matrices rellenas de números aleatorios\n");
	printf("\t [9] Matriz de NxN creada a partir de la resta entre dos matrices rellenas de números aleatorios\n");
	printf("\t [10] Matriz de NxN creada a partir del producto entre dos matrices rellenas de números aleatorios\n");

}

void productoDeDosEnteros(){
	int a,b;
	/*Ingresa el numero a*/
	printf("\n\t->Ingrese el primer entero: ");
	scanf("%d",&a);
	
	/*Ingresa el numero b*/
	printf("\n\t->Ingrese el segundo entero: ");
	scanf("%d",&b);
	
	/*Resultado*/
	printf("\n\t->El producto entre %d y %d es de: %d\n", a,b,(a*b));
}

void conversionDeDias(){
	int days, weeks, years, days_left;
	/*Ingresa el numero de dias*/
	printf("\n\t->Ingresa los dias a convertir: ");
	scanf("%d",&days);
	
	
	/*Resultado*/
	years = days/365;
	printf("\n\t->Años: %d\n",years);
	
	weeks = (days%365)/7;
	printf("\n\t->Semanas: %d\n",weeks);
	
	days_left = (days%365)%7;
	printf("\n\t->Días: %d\n",days_left);
}

void distanciaEntrePuntos(){
	int x1, y1, x2, y2;
	float distancia;
	/*Ingresa la ubicación de los puntos*/
	printf("\n\t->Ingresa X1: ");
	scanf("%d",&x1);
	
	printf("\n\t->Ingresa Y1: ");
	scanf("%d",&y1);
	
	printf("\n\t->Ingresa X2: ");
	scanf("%d",&x2);
	
	printf("\n\t->Ingresa Y2: ");
	scanf("%d",&y2);
	
	
	/*Resultado*/
	distancia = sqrt(pow((x2-x1),2)+ pow((y2-y1),2));
	printf("\n\t->La distancia entre los dos puntos es de: %.2f\n", distancia);
}

void primeros10Numeros(){
	
	/*Resultado*/
	printf("\n\t");
	for(int i = 1; i<=10; i++){
		printf("%d ", i);
	}
	printf("\n");
}

void triangulo(){

	int lines;
	/*Ingresa el numero de líneas*/
	printf("\n\t->Ingresa el número de líneas a pintar: ");
	scanf("%d",&lines);
	
	if(lines>14 || lines <=0){
		printf("\n\t-<< NÚMERO DE LÍNEAS INCORRECTO >>\n");
	}else{
		/*Resultado*/
		for(int i = 1; i<=lines; i++){
			for(int j = 1; j<=i;j++){
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
	}
	
}

void matrizRellenaDeUnos(){

	int size;
	/*Ingresa el tamaño de N*/
	printf("\n\t->Ingresa el tamaño de la matriz (NxN): ");
	scanf("%d",&size);
	if(size<8 && size>=1){
		printf("\n	");
		int matriz[size][size];
		for(int i = 0; i <size;i++){
			for(int j = 0; j<size; j++){
				matriz[i][j]=1;
			}
		}
		
		for(int i = 0; i <size;i++){
			for(int j = 0; j<size; j++){
				printf(" %d", matriz[i][j]);
			}
			printf("\n	");
		}	
	}else{
		printf("\n\t<< TAMAÑO INVÁLIDO >>\n");
	}
	printf("\n");
	
	
}

void matrizRellenaDeNumerosAleatorios(){

	int size, valor;
	/*Ingresa el tamaño de N*/
	printf("\n\t->Ingresa el tamaño de la matriz (NxN): ");
	scanf("%d",&size);
	if(size<8 && size>=1){
		printf("\n	");
		int matriz[size][size];
		for(int i = 0; i <size;i++){
			for(int j = 0; j<size; j++){
				valor = rand()%10;
				matriz[i][j]=valor;
			}
		}
		
		for(int i = 0; i <size;i++){
			for(int j = 0; j<size; j++){
				printf(" %d", matriz[i][j]);
			}
			printf("\n	");
		}	
	}else{
		printf("\n\t<< TAMAÑO INVÁLIDO >>\n");
	}
	printf("\n");
	
	
}

void sumaDeMatrices(){

	int size, valor;
	/*Ingresa el tamaño de N*/
	printf("\n\t->Ingresa el tamaño de las matrices (NxN): ");
	scanf("%d",&size);
	if(size<8 && size>=1){
		printf("\n	");
		int matriz1[size][size], matriz2[size][size], matriz3[size][size];
		for(int i = 0; i <size;i++){
			for(int j = 0; j<size; j++){
				valor = rand()%10;
				matriz1[i][j]=valor;
			}
		}
		printf("\n\tMatriz 1: \n	");
		for(int i = 0; i <size;i++){
			for(int j = 0; j<size; j++){
				printf(" %d", matriz1[i][j]);
			}
			printf("\n	");
		}
		
		for(int i = 0; i <size;i++){
			for(int j = 0; j<size; j++){
				valor = rand()%10;
				matriz2[i][j]=valor;
			}
		}
		
		printf("\n\tMatriz 2: \n	");
		for(int i = 0; i <size;i++){
			for(int j = 0; j<size; j++){
				printf(" %d", matriz2[i][j]);
			}
			printf("\n	");
		}

		printf("\n\tResultado de la suma: \n	");
		for(int i = 0; i <size;i++){
			for(int j = 0; j<size; j++){
				printf(" %d", matriz3[i][j]=matriz1[i][j]+matriz2[i][j]);
			}
			printf("\n	");
		}	
	}else{
		printf("\n\t<< TAMAÑO INVÁLIDO >>\n");
	}
	printf("\n");
	
	
}

void restaDeMatrices(){

	int size, valor;
	/*Ingresa el tamaño de N*/
	printf("\n\t->Ingresa el tamaño de las matrices (NxN): ");
	scanf("%d",&size);
	if(size<8 && size>=1){
		printf("\n	");
		int matriz1[size][size], matriz2[size][size], matriz3[size][size];
		for(int i = 0; i <size;i++){
			for(int j = 0; j<size; j++){
				valor = rand()%10;
				matriz1[i][j]=valor;
			}
		}
		printf("\n\tMatriz 1: \n	");
		for(int i = 0; i <size;i++){
			for(int j = 0; j<size; j++){
				printf(" %d", matriz1[i][j]);
			}
			printf("\n	");
		}
		
		for(int i = 0; i <size;i++){
			for(int j = 0; j<size; j++){
				valor = rand()%10;
				matriz2[i][j]=valor;
			}
		}
		
		printf("\n\tMatriz 2: \n	");
		for(int i = 0; i <size;i++){
			for(int j = 0; j<size; j++){
				printf(" %d", matriz2[i][j]);
			}
			printf("\n	");
		}

		printf("\n\tResultado de la resta: \n	");
		for(int i = 0; i <size;i++){
			for(int j = 0; j<size; j++){
				printf(" %d", matriz3[i][j]=matriz1[i][j]-matriz2[i][j]);
			}
			printf("\n	");
		}	
	}else{
		printf("\n\t<< TAMAÑO INVÁLIDO >>\n");
	}
	printf("\n");
	
	
}

void productoDeMatrices(){

	int size, valor;
	/*Ingresa el tamaño de N*/
	printf("\n\t->Ingresa el tamaño de las matrices (NxN): ");
	scanf("%d",&size);
	if(size<8 && size>=1){
		printf("\n	");
		int matriz1[size][size], matriz2[size][size], matriz3[size][size];
		for(int i = 0; i <size;i++){
			for(int j = 0; j<size; j++){
				valor = rand()%10;
				matriz1[i][j]=valor;
			}
		}
		printf("\n\tMatriz 1: \n	");
		for(int i = 0; i <size;i++){
			for(int j = 0; j<size; j++){
				printf(" %d", matriz1[i][j]);
			}
			printf("\n	");
		}
		
		for(int i = 0; i <size;i++){
			for(int j = 0; j<size; j++){
				valor = rand()%10;
				matriz2[i][j]=valor;
			}
		}
		
		printf("\n\tMatriz 2: \n	");
		for(int i = 0; i <size;i++){
			for(int j = 0; j<size; j++){
				printf(" %d", matriz2[i][j]);
			}
			printf("\n	");
		}

		printf("\n\tResultado del producto: \n	");
		for(int i = 0; i <size;i++){
			for(int j = 0; j<size; j++){
				printf(" %d", matriz3[i][j]=matriz1[i][j]*matriz2[i][j]);
			}
			printf("\n	");
		}	
	}else{
		printf("\n\t<< TAMAÑO INVÁLIDO >>\n");
	}
	printf("\n");
	
	
}
