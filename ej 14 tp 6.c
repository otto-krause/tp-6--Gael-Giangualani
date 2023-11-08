#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mayus (char*ape ) {
	int i=0,may='a'-'A';
	
	
	
	if (ape[i]>='a' && ape[i]<='z'){
		ape[i]=ape[i]-may;
		printf("Su apellido es: %s. \n",ape);
	}
}

int main (){
	int alum,mater,nota,i=0,may='a'-'A';
	char ape[20];	
	float acumu,promeAlum,promeCurso;	
	
	for (alum=1;alum<4;alum++){
		printf("Ingrese el apellido del alumno: ");
		scanf("%s",ape);
		
		mayus (ape);	
		for(mater=1;mater<6;mater++){
			printf("Ingrese nota nro:%d\n",mater);
			scanf("%d",&nota);
			acumu=acumu+nota;
		}
		promeAlum=acumu /5;
		printf("El promedio del alumno es:%.2f\n",promeAlum);
		promeCurso=promeAlum+promeCurso;
		acumu=0;
	}
	printf("El promedio de cursos es:%.2f \n ",promeCurso/5);
	system("pause");
	return 0;
}
