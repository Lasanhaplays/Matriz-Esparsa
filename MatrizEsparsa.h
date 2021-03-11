typedef struct t_celula{
    struct t_celula *direita, *abaixo;
    int linha, coluna;
    double valor;
}Celula;

typedef struct{
    int i, j;
    Celula *inicio, *fimLinha, *fimColuna;
}Matriz;


Matriz *CriarMatriz(int i, int j);
int IniciaCabecas(Matriz *A);
int InsereCabecaLinha(Matriz *A);
int InsereCabecaColuna(Matriz *A);
double ObtemElementoPeloIndice(Matriz *A, int i, int j);
int ApagaMatriz(Matriz *A);
void ImprimeMatriz(Matriz *A);
void Insere(int i, int j, double valor, Matriz *A);
Matriz *SomaMatriz(Matriz *A, Matriz *B);
Matriz *MultiplicaMatriz(Matriz *A, Matriz *B);
Matriz *LeMatriz(char *nome);