#include <stdio.h>
#include <stdlib.h>

int esPar(int numero) {
	if (numero % 2 != 0)
		return 0;
	else {
		if (numero % 2 == 0)
			return 1 ;
	}
}

void mostrarNumeros(int *vector, int n) {
	for (int i = 0; i < n; i++) {
		printf("-Número %d: %d\n", i + 1, vector[i]);
	}
}

int main() {
	int numerosPares[20], i, numerosImpares[20], numero, resultado, contadorPares = 0, contadorImpares = 0;
	
	for (i = 0; i < 20; i++) {
		printf("Ingrese un número N%d: ", i + 1);
		scanf("%d", &numero);
		
		if (numero == 0)
			break;
		
		resultado = esPar(numero);
		
		if (resultado == 1) {
			numerosPares[contadorPares] = numero;
			contadorPares++;
		} else {
			numerosImpares[contadorImpares] = numero;
			contadorImpares++;
		}
	}
	
	printf("Lista de números pares:\n");
	mostrarNumeros(numerosPares, contadorPares);
	
	printf("Lista de números impares:\n");
	mostrarNumeros(numerosImpares, contadorImpares);
	system("pause");
	
	return 0;
}
