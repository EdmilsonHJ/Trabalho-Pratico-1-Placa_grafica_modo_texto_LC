#include "grafica.h"

// Função para limpar a tela
void clearScreen() {
    clrscr(); // Usando a função clrscr() do conio.h para limpar a tela.
}

// Função que imprime um caractere em uma posição específica da tela com atributos
bool printCharAt(char ch, int x, int y, char attributes) {
    if (x < 0 || x >= 80 || y < 0 || y >= 25) {
        return false; // Verifica se as coordenadas estão dentro dos limites da tela
    }

    gotoxy(x + 1, y + 1); // Usando a função gotoxy() do conio.h para definir a posição do cursor
    textcolor(attributes); // Define a cor do texto com a função textcolor() do conio.h
    cprintf("%c", ch); // Imprime o caractere na posição atual do cursor

    return true; // Retorna true se a impressão foi bem-sucedida
}

// Função que imprime uma string a partir de uma posição específica da tela com atributos
bool printStringAt(char *str, int x, int y, char attributes) {
    int i = 0;
    while (str[i] != '\0') {
        if (!printCharAt(str[i], x + i, y, attributes)) {
            return false; // Se a impressão de um caractere falhar, retorne false
        }
        i++;
    }
    return true;
}

// Função que imprime um inteiro em uma posição com uma cor específica
bool printIntAt(int number, int col, int row, int color) {
    // Assume que a largura da tela é fixa em 80 colunas
    if (col < 0 || col >= 80 || row < 0 || row >= 25) {
        return false; // Retorna false para indicar falha (coordenadas fora dos limites)
    }

    // Move o cursor para a posição especificada
    gotoxy(col + 1, row + 1); // Usando a função gotoxy() do conio.h para definir a posição do cursor

    // Define a cor do texto
    textcolor(color);

    // Imprime o inteiro
    cprintf("%d", number);

    // Reseta a cor do texto para o padrão
    textcolor(7); // Voltar à cor padrão (7 é a cor branca)

    return true; // Retorna true para indicar sucesso
}


