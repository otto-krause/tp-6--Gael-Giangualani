#include <stdio.h>
#include <stdlib.h>

void Repeticiones1(int *listaPrincipal, int *numerosAComparar) {
	int posiciones[10], contador = 0;
	
	for (int i = 0; i < 8; i++) {
		if (listaPrincipal[i] == numerosAComparar[0]) {
			posiciones[contador] = i;
			contador++;
		}
	}
	
	printf("El número %d se repite %d veces en la lista principal\n", numerosAComparar[0], contador);
	printf("Las posiciones en las que se repite:\n");
	
	for (int i = 0; i < contador; i++) {
		printf("Posición: %d\n", posiciones[i]);
	}
}

void Repeticiones2(int *listaPrincipal, int *numerosAComparar) {
	int posiciones[10], contador = 0;
	
	for (int i = 0; i < 8; i++) {
		if (listaPrincipal[i] == numerosAComparar[1]) {
			posiciones[contador] = i;
			contador++;
		}
	}
	
	printf("El número %d se repite %d veces en la lista principal\n", numerosAComparar[1], contador);
	printf("Las posiciones en las que se repite:\n");
	
	for (int i = 0; i < contador; i++) {
		printf("Posición: %d\n", posiciones[i]);
	}
}

int main(int argc, char *argv[]) {
	int listaPrincipal[8], numerosAComparar[2], i;
	
	for (i = 0; i < 8; i++) {
		printf("Ingrese el número %d: ", i + 1);
		scanf("%d", &listaPrincipal[i]);
	}
	
	for (i = 0; i < 2; i++) {
		printf("Ingrese el número a comparar: ");
		scanf("%d", &numerosAComparar[i]);
	}
	
	Repeticiones1(listaPrincipal, numerosAComparar);
	Repeticiones2(listaPrincipal, numerosAComparar);
	
	system("pause");
	
	return 0;
}
