#include <stdio.h>

int main() {
    char escolha;
    char caractere;
    char texto[80]; // String para armazenar o texto inserido
    int linha, coluna;
    int cor; // Alterado para int para permitir cores de 0 a 255
    int numero;

    clrscr(); // Limpa a tela usando clrscr() do conio.h

    // Apresenta o menu para escolher entre imprimir caractere ou imprimir string
    printf("Escolha a opcao:\n");
    printf("1. Imprimir Caractere\n");
    printf("2. Imprimir String\n");
    printf("3. Imprimir Inteiro\n");
    printf("Opcao: ");
    scanf(" %c", &escolha);

    if (escolha == '1') {
        // Opção para imprimir um caractere
        printf("Informe a linha (0-24): ");
        scanf("%d", &linha);

        printf("Informe a coluna (0-79): ");
        scanf("%d", &coluna);

        printf("Informe o caractere: ");
        scanf(" %c", &caractere);

        printf("Informe a cor (0-255): ");
        scanf("%d", &cor);

        // Chamar a função para imprimir o caractere na posição especificada com a cor
        if (!printCharAt(caractere, coluna, linha, cor)) {
            printf("Coordenadas fora dos limites da tela.\n");
        }
    } else if (escolha == '2') {
        // Opção para imprimir uma string
        printf("Informe a linha (0-24): ");
        scanf("%d", &linha);

        printf("Informe a coluna (0-79): ");
        scanf("%d", &coluna);

        // Solicitar o texto ao usuário
        printf("Informe o texto a ser impresso: ");
        scanf(" %[^\n]", texto);

        printf("Informe a cor (0-255): ");
        scanf("%d", &cor);

        // Chamar a função para imprimir o texto na tela
        if (!printStringAt(texto, coluna, linha, cor)) {
            printf("Coordenadas fora dos limites da tela para o texto.\n");
        }
    } else if (escolha == '3') {
        // Opção para imprimir um inteiro
        printf("Informe a linha (0-24): ");
        scanf("%d", &linha);

        printf("Informe a coluna (0-79): ");
        scanf("%d", &coluna);

        printf("Informe o inteiro: ");
        scanf("%d", &numero);

        printf("Informe a cor (0-255): ");
        scanf("%d", &cor);

        // Chamar a função para imprimir o inteiro na tela
        if (!printIntAt(numero, coluna, linha, cor)) {
            printf("Coordenadas fora dos limites da tela para o inteiro.\n");
        }
    }else {
        printf("Opção inválida.\n");
    }

    return 0;
}
