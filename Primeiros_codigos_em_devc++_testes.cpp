#include <stdio.h> // abrir arquivo de cabeçalho padrão
#include <conio.h> // abre arquivo de cabeçalho no console
int main () { //função principal de um programa em C
float anos, dias; //duas variáveis do tipo float
printf("digitesuaidade:\n"); //apresenta texto na tela
scanf("%f",&anos); //lê o valor do teclado para variável
dias = anos * 365; //calcula o número de dias
printf("Sua idade em dias e:%f\n", dias); //coloca texto e 
                                       //resultado na tela
getch(); // faz uma pausa

return 0; 
}