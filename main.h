#ifndef MAIN_H
#define MAIN_H

typedef struct stack Stack;

int inicializar(Stack *pino1, int *discos);
void terminar(Stack *pino1, Stack *pino2, Stack *pino3);
int movimentar(Stack *pino1, Stack *pino2, Stack *pino3);
int mover(Stack *origem, Stack *destino);
void mostrarPinos(Stack *pino1, Stack *pino2, Stack *pino3);
void mostrarPossibilidades(Stack *pino1, Stack *pino2, Stack *pino3);

#endif
