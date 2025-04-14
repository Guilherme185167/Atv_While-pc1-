/**/ 
#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
#include <string.h> 
#include <time.h> 
#include <Windows.h> 
 
void config(){ 
   system("chcp 65001"); 
   setlocale(LC_ALL, "pt_BR.UTF-8"); 
   system("cls"); 
   printf("\033[0;32m");  
} 
 
void cabeca(){ 
   char text[80] = "matrix"; 
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
   srand(time(NULL));
    config(); 
    cabeca(); 
    while(1){
      int col = 180;
      for(int i = 0; i < col; i++){
         char c = rand() % (177 - 33 + 1) + 33;
         printf("%c", c);
      }
      puts("");
      Sleep(80);
    }
return 0; 
} 
