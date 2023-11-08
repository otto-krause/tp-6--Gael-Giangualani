#include <stdio.h>
#include <stdlib.h>



int encontrarMenor(int *lista) {
	int menor = 0;
	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			menor = lista[i];
		} else {
			if (lista[i] < menor) {
				menor = lista[i];
			}
		}
	}
	return menor;
}
int encontrarMayor(int *lista) {
	int mayor = 0;
	for (int i = 0; i < 10; i++) {
		if (lista[i] > mayor) {
			mayor = lista[i];
		}
	}
	return mayor;
}

void contarRepeticiones(int *lista, int menor, int mayor) {
	int contadorMayor = 0, contadorMenor = 0;
	for (int i = 0; i < 10; i++) {
		if (lista[i] == mayor) {
			contadorMayor++;
		} else {
			if (lista[i] == menor) {
				contadorMenor++;
			}
		}
	}
	printf("El mayor se repite %d veces\n", contadorMayor);
	printf("El menor se repite %d veces\n", contadorMenor);
}

int main() {
	int lista[10], i, menor = 0, mayor = 0;
	for (i = 0; i < 10; i++) {
		printf("Ingrese el valor N%d: ", i + 1);
		scanf("%d", &lista[i]);
	}
	mayor = encontrarMayor(lista);
	printf("El mayor: %d\n", mayor);
	menor = encontrarMenor(lista);
	
	printf("El menor: %d\n", menor);
	contarRepeticiones(lista, menor, mayor);
	
	system("pause");
	return 0;
}
