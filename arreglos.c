
#include <stdio.h>
#define NUMFIL 2
#define NUMCOL 2

typedef int MatrizReal[NUMFIL][NUMCOL];

MatrizReal matriz;

void leeMatriz(MatrizReal m, int c, int f){

for (int i=0;i<f;i++)
	for (int j=0;j<c;j++)
	{ 
		printf ("introduce el valor de la posicion %d, %d :", i, j);
		scanf ("%d",&m[i][j]);
	}

}



void imprimeMatriz(MatrizReal m, int c, int f){

for (int i=0;i<f;i++){
	for (int j=0;j<c;j++)
	{ 
		printf ("El valor de la posicion %d, %d es :%d ", i, j, m[i][j]);
		
	}
	printf("\n");
  }
}

int valorMayorMatriz(MatrizReal m, int c, int f){
int mayor=m[0][0];
for (int i=0;i<f;i++){
	for (int j=0;j<c;j++)
	{ 
		if (mayor < m[i][j])
			mayor = m[i][j];
		
	}
	
  }
  return mayor;
}

void main(){
	MatrizReal m;

	leeMatriz(m,NUMFIL,NUMCOL);
	imprimeMatriz(m,NUMFIL,NUMCOL);
	printf("El valor mayor es: %d\n", valorMayorMatriz(m,NUMFIL,NUMCOL));
}