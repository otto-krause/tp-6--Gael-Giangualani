#include <stdio.h>
#include <stdlib.h>

void ordenarNegativos(int *numeros, int n) {
	int i, j, temp;
	
	
	for (i = 0; i < n; i++) {
		
		for (j = i + 1; j < n; j++) {
			if (numeros[i] > numeros[j]) {
				temp = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = temp;
			}
		}
	}
	
	printf("Lista de Negativos:\n");
	for (i = 0; i < n; i++) {
		printf("%d\n", numeros[i]);
	}
}

void ordenarPares(int *numeros, int p) {
	int i, j, temp;
	
	for (i = 0; i < p; i++) {
		for (j = i + 1; j < p; j++) {
			if (numeros[i] < numeros[j]) {
				temp = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = temp;
			}
		}
	}
	
	
	printf("Lista de Pares:\n");
	for (i = 0; i < p; i++) {
		printf("%d\n", numeros[i]);
	}
}



int main() {
	
	
	int num, i, positivos[8], p = 0, negativos[8], n = 0;
	for (i = 0; i < 8; i++) {
		printf("Ingrese el valor N%d: ", i + 1);
		scanf("%d", &num);
		while (num == 0) {
			printf("Ingrese un valor distinto de 0: ");
			scanf("%d", &num);
		}
		if (num > 0) {
			positivos[p] = num;
			p++;
		} else {
			if (num < 0) {
				negativos[n] = num;
				n++;
			}
		}
	}
	
	
	
	ordenarPares(positivos, p);
	ordenarNegativos(negativos, n);
	system("pause");
	return 0;
}
