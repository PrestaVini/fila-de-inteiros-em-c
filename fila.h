#define TAM_MAX 5

typedef struct fila {
	int vetor[TAM_MAX];
	int fim;
} Fila;

void inicializar();
int verificarVazia();
int verificarCheia();
void inserir(int numero);
void imprimir();
int remover();

//Funcoes para testes automatizados
void testar1_VaziaFila();
void testar2_InserirFila(int quant);
void testar3_RemoverFila();
void testar4_RemoverFila(int quant);

