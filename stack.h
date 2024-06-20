
typedef struct stack Stack;

Stack * criar();
void destruir(Stack * p);
int desempilhar(Stack * p);
void empilhar(Stack * p, int x); 
int tamanho(Stack * p);
int topo(Stack * p);
void imprimir(Stack * p);
void inverter3(Stack * p);
