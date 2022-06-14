#include<stdio.h>
#include<stdlib.h>


void cabecalho(){
	printf("\n");
	printf("\t\tLISTA DE EXERCICIO\n");
	printf("\tEstrutura de dados\n");
	printf("\taluno: jeferson guimaraes batalha");
	printf("\n");
	printf("\nQuestao 2:");
}

int main() {
	
	cabecalho();
	printf("\n");
int tam = 3;

int matrizA[tam][tam];
int matrizB[tam][tam];
int i, j;

for (i=0; i<tam; i++)
{
for (j=0; j<tam; j++)
{
printf ("Insira o elemento [%d][%d] das matriz A\n", i, j);
scanf ("%d", &matrizA[i][j]);
}
}

for (i=0; i<tam; i++)
{
          for (j=0; j<tam; j++)  
{
            printf("%d\t", matrizA[i][j]); 

}
printf("\n");

}



for (i=0; i<tam; i++)
{

for (j=0; j<tam; j++)
{
matrizB[i][j]=matrizA[j][i];
}

}

for (i=0; i<tam; i++)
{
          for (j=0; j<tam; j++)  
{
            printf("%d\t", matrizB[i][j]); 

}
printf("\n");
}



system("pause");
return (0);
}
