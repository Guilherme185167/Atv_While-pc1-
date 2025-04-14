/*Escreva um programa que peça para o usuário descobrir um número secreto. 
O programa sorteia um número e o usuário precisa informar ele. 
Enquanto a resposta estiver errada, o usuário ficará tentando adivinhar. 
Para sortear o número aleatório use a função rand() da biblioteca stdlib.h e limite o valor com o operador módulo (%).: */ 
#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
#include <string.h> 
#include <time.h> 
#define inter 10
 
void config(){ 
   system("chcp 65001"); 
   setlocale(LC_ALL, "pt_BR.UTF-8"); 
   system("cls"); 
} 
 
void cabeca(){ 
   char text[80] = "Jogo de advinhação"; 
   int tam = strlen(text); 
   int largura  = strlen(text) + 2; 
   int espaços = (largura - tam) / 2; 
   for(int i = 0; i < largura; i++){printf("=");} 
   printf("\n"); 
   for (int i = 0; i < espaços; i++) {printf(" ");} 
   printf("%s\n", text); 
   for(int i = 0; i < largura; i++){printf("=");} 
   printf("\n"); 
} 
 
int main (){ 
    config();   
    int op;
    srand(time(NULL));
    int n = rand() % inter + 1;
    do{
      cabeca();
      printf("%d\n", n);
      printf("Informe um número inteiro entre 0 e %d: ", inter);
      scanf("%d", &op);
      system("cls");
    }while(op != n);
    printf("\033[32mParabens! o numero escolhido foi: %d\033[0m", n);
return 0; 
} 
