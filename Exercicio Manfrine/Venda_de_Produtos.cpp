#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void cabecalho(){
	printf("\n");
	printf("\t\tLISTA DE EXERCICIO\n");
	printf("\tEstrutura de dados\n");
	printf("\taluno: jeferson guimaraes batalha");
	printf("\n");
	printf("\nQuestao 5:");
}

int main(void){
	cabecalho();
	printf("\n");
	
	char produto_nome[10][3];
	int produto_id[3], control = 1, opc, count = 1, i, id_item_compra, qtd_item, opc2;
	float produto_preco[3], total_venda = 0;
	do{
		printf("Deseja cadastrar um produto: 1\n");
		printf("Deseja comprar um produto (max 3): 2\n");
		printf("sair do sistema: 3\n");
		scanf("%d", &opc);
		
		switch(opc){
			case 1:
				printf("Nome do produto:\n");
				fflush(stdin);
				gets(produto_nome[count]);
				produto_id[count] = count;
				printf("informe o valor do produto:\n");
				scanf("%f", &produto_preco[produto_id[count]]);
				count++;
				printf("\n\n");
			break;
			
			case 2:
				
				do{
					printf("Qual item deseja comprar? \n");
				for(i = 1;i<count;i++){
					printf("Nome: %s, valor:R$%.2f, codigo:%d \n", produto_nome[i], produto_preco[i], produto_id[i]);
				}
					scanf("%d", &id_item_compra);
					printf("\nInforme a quantidade:\n");
					scanf("%d", &qtd_item);
					
					for(i = 1;i<count;i++){
					if(id_item_compra == produto_id[i]){
						printf("Compra realizada, deseja comprar algo mais?\n");
						total_venda = total_venda + (qtd_item*produto_preco[id_item_compra]);
						scanf("%d", &opc2);
						if(opc2 == 1){
							break;
						}
					}
				}
				}while(opc2 != 0);
				
				printf("total da venda: %.2f", total_venda);
				
				printf("\n\n");
			break;
			
			case 3:
				control = 0;
			break;
			
		}
	}while(control!=0);	
}