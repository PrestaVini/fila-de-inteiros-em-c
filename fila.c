#include <stdio.h>
#include "fila.h"

Fila f;


void inicializar(){
	//atribui -1 ao membro final da fila
	f.fim = -1;
}

int verificarVazia(){
	//verifica se o membro final da fila eh igual a -1
	if (f.fim == -1) {
		return 1;
	} else {
		return 0;
	}
}

int verificarCheia() {
	//verifica se o membro final da fila eh igual a TAM_MAX-1
	if (f.fim == TAM_MAX - 1) {
		return 1;
	} else {
		return 0;
	}
}

void inserir(int numero){
	//verificar se a fila nao estah cheia
 		//atualiza o fim da fila
		//insere o numero no vetor no final
	//se estiver cheia, informa o usu�rio
	if (!verificarCheia()) {
		f.fim++;
		f.vetor[f.fim] = numero;
	} else {
		printf("\nA lista esta cheia!");
	}
}

void imprimir(){
	//verificar se a fila n�o est� vazia
        //define uma vari�vel auxiliar
 		//percorre o vetor do in�cio ate o fim da fila
			//imprimir na tela o elemento na posi��o i
	//se estiver vazia, informa o usu�rio
	if (!verificarVazia()) {
		printf("Valores: ");
		for (int i = 0; i <= f.fim; i++) {
			printf("%d  ", f.vetor[i]);
		}
		printf("\nEnderecos: ");
		for (int i = 0; i <= f.fim; i++) {
			printf("%d  ", i);
		}
	} else {
		printf("A lista esta vazia!");
	}
}

int remover() {
	//verificar se a fila n�o est� vazia
        //define duas vari�veis aux e i
		//aux ir� guardar o elemento do in�cio da fila
		//translada os elementos do inicio ao final -1
		    //a posi��o i receber o valor da posi��o i+1
		//atualiza o fim da fila
     		//retorna n�mero removido
	//se estiver vazia, informa o usu�rio
	if (!verificarVazia()) {
		int aux, i;
		aux = f.vetor[0];
		for (i = 0; i < f.fim; i++) {
			f.vetor[i] = f.vetor[i + 1];
		}
		f.fim--;
		return aux;
	} else {
		printf("A fila esta vazia!");
		return 0;
	}
}


//Funcoes para testes automatizados
void emitirResultado(int resultado) {
	if(resultado) 
		printf("\nGREEN: Passou!");
	else printf("\nRED: Nao passou!");
}

void testar1_VaziaFila(){
	printf("\nTeste 1: Este teste irah verificar a fila vazia");
	inicializar();
	if(verificarVazia()) {
		emitirResultado(1);
	} else emitirResultado(0);
}

void testar2_InserirFila(int quant){
	int numeros[quant], i;
	printf("\nTeste 2: Este teste irah inserir %d elementos na fila", quant);
	if (quant > TAM_MAX)
		printf(", e terah que dizer que a fila estah cheia, inserindo somente os %d primeiros", TAM_MAX);
	
	for(i = 0; i < quant; i++)
		numeros[i] = i+1;
		
	inicializar();
	for(i = 0; i < quant; i++)
		inserir(numeros[i]);
		
	for(i = 0; i < quant && i < TAM_MAX; i++)
		if(f.vetor[i] != numeros[i]) {
			emitirResultado(0);
			return;
		}
	emitirResultado(1);
}

void testar3_RemoverFila(){
	int removido = 0;
	printf("\nTeste 3: Este teste irah tentar remover de uma fila vazia");
	inicializar();
	removido = remover();
	if(verificarVazia())
		emitirResultado(1);
	else emitirResultado(0);
}

void testar4_RemoverFila(int quant){
	int removido = 0, i, numeros[quant];
	printf("\nTeste 4: Este teste irah inserir %d elemento na fila e remove-lo, deixando a fila vazia", quant);
	for(i = 0; i < quant; i++)
		numeros[i] = i+1;
	
	inicializar();
	for(i = 0; i < quant; i++) {
		inserir(numeros[i]);
	}
	
	for(i = 0; i < quant && i < TAM_MAX; i++) {
		removido = remover();
		if(removido != numeros[i]) {
			emitirResultado(0);
			return;
		}
	}
	//verifica se a fila ficou vazia
	if(verificarVazia())
		emitirResultado(1);
	else emitirResultado(0);
}

