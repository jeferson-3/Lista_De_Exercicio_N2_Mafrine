#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	printf("\n");
	printf("\t\tLISTA DE EXERCICIO\n");
	printf("\tEstrutura de dados\n");
	printf("\taluno: jeferson guimaraes batalha");
	printf("\n");
	printf("\nQuestao 3:");
}

int main() {
	
	cabecalho();
	printf("\n");

    int tam = 3; 
    int l, c, mat[tam][tam],i,j; 

    // preenche a matriz 
    for (i=0; i<tam; i++) 
{
for (j=0; j<tam; j++)
{
printf ("Insira o elemento [%d][%d] das Matriz A\n", i, j);
scanf ("%d", &mat[i][j]);
}
}
for(l = 0; l < tam; l++){ 
        for(c = 0;  c< tam; c++){ 
            printf("%2d ", mat[l][c]); 
        } 
        printf("\n"); 
    } 

    printf("\n\nDiagonal principal: "); 
    for(l = 0; l < tam; l++){ 
        printf("%d ", mat[l][l]); 
}

    return 0; 
}
