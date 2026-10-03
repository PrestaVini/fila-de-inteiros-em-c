#include <stdio.h>
#include "fila.h"

int main(int argc, char *argv[]) {
	int temp;
	int opcao;
	inicializar();

	do {
		//exibir o menu
		printf("\n    MENU");
		printf("\n1. Inicializar");
		printf("\n2. Inserir");
		printf("\n3. Remover");
		printf("\n4. Imprimir");
		printf("\n5. Realizar testes de inicializar a fila");
		printf("\n6. Realizar testes de inserir na fila");
		printf("\n7. Realizar testes de remover na fila");
		printf("\n8. Sair");
		printf("\nDigite a opcao desejada: ");
		
		//ler a opcao desejada pelo usuario
		scanf("%d", &opcao);
		
		//processar a funcionalidade
		switch(opcao) {
			case 1:
				inicializar();
				break;
			case 2:
				printf("Digite o numero: ");
				scanf("%d", &temp);
				inserir(temp);
				break;
			case 3:
				temp = remover();
				printf("\nNumero removido: %d", temp);
				break;
			case 4:
				imprimir();
				break;
			case 5:
				testar1_VaziaFila();
				break;
			case 6:
				testar2_InserirFila(1);
				testar2_InserirFila(2);
				testar2_InserirFila(3);
				testar2_InserirFila(4);
				testar2_InserirFila(5);
				testar2_InserirFila(6);
				testar2_InserirFila(7);
				break;
			case 7:
				testar3_RemoverFila();
				testar4_RemoverFila(1);
				testar4_RemoverFila(2);
				testar4_RemoverFila(3);
				testar4_RemoverFila(4);
				testar4_RemoverFila(5);
				testar4_RemoverFila(6);
				break;
			case 8:
				printf("Encerrando o programa...");
				break;
			default:
				printf("\nOpcao invalida. Escolha um numero valido de opcao.");
		}
		
	} while(opcao != 8);
}

