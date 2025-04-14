/**/ 
#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
#include <string.h> 
#include <Windows.h> 
 
void config(){ 
   system("chcp 65001"); 
   setlocale(LC_ALL, "pt_BR.UTF-8"); 
   system("cls"); 
} 
 
void cabeca(){ 
   char text[80] = "Menu"; 
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
    do{
      cabeca(); 
      puts("1 - cadastro\n2 - excluir\n3 - relatório\n0 - sair");
      scanf("%d", &op);
      system("cls");
    }while(op != 0);
    printf("\033[31mSaindo");
    for(int i = 0; i < 6; i++){
      printf("\033[3%dm.\033[0m", i);
      Sleep(100);
    }
    printf("\033[0m");
    system("cls");
return 0; 
} 
