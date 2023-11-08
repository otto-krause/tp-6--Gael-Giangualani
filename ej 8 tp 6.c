#include <stdio.h>
#include <stdlib.h>
	
	void ordenarLista(int *numeros) {
	int i, j, temp;
	for (i = 0; i < 7; i++) {
		for (j = i + 1; j < 7; j++) {
			if (numeros[i] > numeros[j]) {
				temp = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = temp;
			}
		}
	}
	for (i = 0; i < 7; i++) {
		printf("- %d\n", numeros[i]);
		
		
	}
}
	
	int main() {
		int numeros[7], i;
		
		for (i = 0; i < 7; i++) {
			printf("Ingrese el valor N%d: ", i + 1);
			scanf("%d", &numeros[i]);
			
			while (numeros[i] <= 0) {
				printf("Ingrese un valor positivo: ");
				scanf("%d", &numeros[i]);
				
			}
		}
		ordenarLista(numeros);
		system("pause");
		return 0;
	}
