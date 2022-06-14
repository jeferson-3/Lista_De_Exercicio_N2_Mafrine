
#include <stdio.h>
void cabecalho(){
	printf("\n");
	printf("\t\tLISTA DE EXERCICIO\n");
	printf("\tEstrutura de dados\n");
	printf("\taluno: jeferson guimaraes batalha");
	printf("\n");
	printf("\nQuestao 1:");
}

int main() {
	
	cabecalho();
	printf("\n");
	
  int n = 4; 
  int i, j, m[n][n];  
  for (i=0; i<n;i++){ 
    printf("Informe os elementos da %da. linha:\n", (i+1)); 
    for (j=0; j<n; j++) { 
      printf("m[%d][%d] = ", i, j); 
      scanf("%d", &m[i][j]); 
    } 
    printf("\n"); 
  } 
  int ehidentidade = 1; 
  for (i=0; (i<n)&&(ehidentidade==1); i++) { 
    for (j=0; (j<n)&&(ehidentidade==1); j++) { 
      if ((i == j) && (m[i][j] != 1)){ 
      	ehidentidade = 0;  
}
      else if ((i != j) && (m[i][j] != 0)){ 
      	 ehidentidade = 0; 
}
   } 
  } 
  printf("\n"); 
  for (i=0; i<n; i++) { 
    printf("%da. linha: ", (i+1)); 
    for (j=0; j<n; j++) { 
      printf("%d ", m[i][j]); 
    } 
    printf("\n"); 
  } 
  if (ehidentidade == 1) 
     printf("\nA matriz informada eh uma matriz identidade.\n"); 
  else printf("\nA matriz informada \"nao\" eh uma matriz identidade.\n");
  
  return 0; 
}
