/*Imprima os números de 1 a 1000.*/ 
#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
#include <string.h> 
 
void config(){ 
   system("chcp 65001"); 
   setlocale(LC_ALL, "pt_BR.UTF-8"); 
   system("cls"); 
} 
 
void cabeca(){ 
   char text[80] = "1 a 1000"; 
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
    cabeca(); 
    int i = 0;
    while(i != 1001){
      if(i <= 999){
         printf("%d, ", i);
      }
      else{
         printf("%d", i);
      }
      i++;
    }
return 0; 
} 
