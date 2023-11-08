#include <stdio.h>
#include <stdlib.h>
int encontrarPrimero(float *tiempos) {
	float tiempo = 0;
	int primero = 0;
	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			tiempo = tiempos[i];
			primero = i;
		} else {
			if (tiempos[i] < tiempo) {
				tiempo = tiempos[i];
				primero = i;
			}
		}
	}
	return primero;
}

int encontrarUltimo(float *tiempos) {
	int ultimo = 0;
	float tiempo = 0;
	for (int i = 0; i < 10; i++) {
		if (tiempos[i] > tiempo) {
			tiempo = tiempos[i];
			ultimo = i;
		}
	}
	return ultimo;
}

int encontrarSegundo(float *tiempos, int primero) {
	int segundo = 100;
	float tiempo = 1000;
	for (int i = 0; i < 10; i++) {
		if (primero == 0) {
			if (tiempos[i] < tiempo && tiempos[i] != tiempos[primero]) {
				tiempo = tiempos[i];
				segundo = i;
			}
		} else {
			if (i == 0 && primero != 0) {
				tiempo = tiempos[i];
				segundo = i;
			} else {
				if (tiempos[i] < tiempo && tiempos[i] != tiempos[primero]) {
					tiempo = tiempos[i];
					segundo = i;
				}
			}
		}
	}
	return segundo;
}

float calcularPromedio(float *tiempos) {
	float total = 0, promedio;
	for (int i = 0; i < 10; i++) {
		total += tiempos[i];
	}
	promedio = total / 10;
	return promedio;
}

int main() {
	int i, primero, segundo, ultimo;
	float tiempos[10], promedio = 0;
	for (i = 0; i < 10; i++) {
		printf("Ingrese el tiempo del corredor N%d: ", i + 1);
		scanf("%f", &tiempos[i]);
	}
	primero = encontrarPrimero(tiempos);
	
	
	printf("Primero: %d\n", primero + 1);
	
	
	segundo = encontrarSegundo(tiempos, primero);
	printf("Segundo: %d\n", segundo + 1);
	
	ultimo = encontrarUltimo(tiempos);
	printf("Ultimo: %d\n", ultimo + 1);
	
	promedio = calcularPromedio(tiempos);
	printf("Promedio de tiempo: %.2f", promedio);
	
	system("pause");
	return 0;
}
