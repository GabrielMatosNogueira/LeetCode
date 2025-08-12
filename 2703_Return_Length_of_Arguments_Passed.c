/**
 * @brief Inclusao de biblioteca padrao
 */
#include <stdio.h>

/**
 * @brief argumentsLength
 * @details Funcao preenche um vetor e retorna qual o tamanho desta estrutura
 * @return quantity (quantidade de valore presentes dentro do vetor)
 * @version v0.0.1
 */
int argumentsLength(int vetor[])
{
    int quantity=0;
    int i=0;

    while (i<10 && vetor[i]!='\0')
    {
        if(vetor[i]!='\0')
        {
            quantity=quantity+1;
        }
        i=i+1;
    }

    return quantity;
}
/**
 * @brief Programa principal
 * @details Chama a funcao "argumentsLength"
 * @return 0 (Standart output)
 * @version v0.0.1
 */
int main(void)
{
    // Declaracao do array
    int i=0;
    int quantity=0;
    int vetor[10];

    // Garantia que o array sera inicializado com valores vazios (sem lixo de memoria)
    for(i=0; i<10; i=i+1)               
    {
        vetor[i]='\0';
    }

    // Armazena entradas para dentro de cada posicao do vetor
    for(i=0; i<10; i=i+1)
    {
        scanf("%d", &vetor[i]);
    }

    quantity=argumentsLength(vetor);

    printf("%d", quantity);

    return 0;
}
