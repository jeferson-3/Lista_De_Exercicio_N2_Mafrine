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
	
int tam = 20;
char status[10][tam];
int vagas[tam], count = 0, i, vaga, opc, opc2;

do{

printf("Selecionar uma vaga: 1 \n");
printf("Desocupar uma vaga: 2 \n");
printf("Fecha Sistema: 3 \n");
printf("Informe sua opcao: ");
scanf("%d", &opc);
switch(opc){
case 1:
printf("Escolha uma vaga: (1 a 20): ");
scanf("%d", &vaga);
if(strcmp(status[vaga],"ocupado") == 0){
printf("Vaga indisponivel\n");
}else{
printf("Vaga disponivel\n");
printf("Deseja confirmar reserva: 1 - sim || 2 nao \n ");
scanf("%d", &opc2);
if(opc2 == 1){
strcpy(status[vaga], "ocupado");
}
}
break;

case 2:
printf("Escolha uma vaga: (1 a 20): ");
scanf("%d", &vaga);
if(strcmp(status[vaga],"ocupado") == 0){
printf("Vaga ocupada, deseja confirmar a desocupacao? 1 - sim | 2 - nao \n");
scanf("%d", &opc2);
if(opc2 == 1){
strcpy(status[vaga], "Vago");
printf("Vaga desocupada");
}
}else{
printf("Vaga nao esta ocupada\n");

}
break;
case 3:
printf("Fechando o sistema:");
count = 3;
break;
}

}while(count!=3);
}
