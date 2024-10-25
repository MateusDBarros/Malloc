#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;  // Declaração de um ponteiro para inteiros
    int tamanho;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho); // Lê o tamanho fornecido pelo usuário

    array = (int *)malloc(tamanho * sizeof(int)); // Aloca memória para o array
    if (array == NULL) { // Verifica se a alocação foi bem-sucedida
        printf("Erro na alocação de memória!\n");
        return 1;
    }

    printf("Digite %d valores inteiros:\n", tamanho);
    for (int i = 0; i < tamanho; i++) { // Preenche o array com valores fornecidos
        scanf("%d", &array[i]);
    }

    printf("Valores armazenados:\n");
    for (int i = 0; i < tamanho; i++) { // Exibe os valores do array
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array); // Libera a memória alocada

    return 0;
}
