#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	printf("\n");
	printf("\t\tLISTA DE EXERCICIO\n");
	printf("\tEstrutura de dados\n");
	printf("\taluno: jeferson guimaraes batalha");
	printf("\n");
	printf("\nQuestao 4:");
}

int main() {
	
	cabecalho();
	printf("\n");
	
int tam = 3; 
    int l, c, mat[tam][tam],i,j, sum=0, count=0; 
float media = 0;
    // preenche a matriz 
    for (i=0; i<tam; i++) 
{
for (j=0; j<tam; j++)
{
printf ("Insira o elemento [%d][%d] das Matriz A\n", i, j);
scanf ("%d", &mat[i][j]);
}
}

    // imprime a matriz na tela 
    for(l = 0; l < tam; l++){ 
        for(c = 0;  c< tam; c++){ 
            printf("%d ", mat[l][c]); 
        } 
        printf("\n"); 
    } 

printf("\n\n");
for(l = 0; l < tam; l++){ 
        for(c = 0;  c< tam; c++){ 
            if(c<l){ 
            	printf("%d", mat[l][c]); 
            	sum += mat[l][c]; 
            	count++; 
}
        } 
    } 
     
    media = sum/count; 
     
    printf("\n\nsoma: %d, countador:%d \n\n", sum, count); 
     
    printf("\n\nmedia de valores do triangulo inferior eh: %.2f", media); 
    return 0; 
}
