#include <stdio.h>
#include <stdlib.h>
int numeros(int*nume) {
	int i=1;
	for(i=1;i<=6;i++){
		printf("ingrese un numero \n");
		scanf("%d",&nume[i]);
		
	}
	return i;
}
int main (){
	
	int nume[7];
	numeros(nume);
	printf("Sus numeros ingresados fueron: %d \n ",nume[1]);
	printf("Sus numeros ingresados fueron:%d \n ",nume[2]);
	printf("Sus numeros ingresados fueron: %d \n ",nume[3]);
	printf("Sus numeros ingresados fueron :%d \n ",nume[4]);
	printf("Sus numeros ingresados fueron :%d \n ",nume[5]);
	printf("Sus numeros ingresados fueron: %d \n ",nume[6]);
	
	
	system("pause");
}
	
	
	
	
