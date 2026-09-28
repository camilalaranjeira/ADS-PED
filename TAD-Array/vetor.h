#ifndef VETOR_H
#define VETOR_H

typedef struct {
    int *dados;
    int tamanho_alocado;
    int tamanho_ocupado;
} Vetor;

/* Cria um vetor vazio, com uma capacidade inicial mínima */
Vetor *vetor_criar(void);
/* Adiciona 'valor' ao final do vetor v, realocando se necessário */
void append(Vetor *v, int valor);
/* Imprime os elementos ocupados de v */
void show(Vetor *v);
/* Retorna um novo Vetor com cópia dos elementos de v no intervalo [x0, x1] */
Vetor *slice(Vetor *v, int x0, int x1);
/* Remove o último elemento de v (apenas ajusta tamanho_ocupado) */
void pop(Vetor *v);
/* Libera a memória usada pelo vetor */
void vetor_destruir(Vetor *v);

#endif