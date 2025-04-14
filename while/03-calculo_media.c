/*Leia N valores e calcule a média destes valores.
Leia os números enquanto forem diferentes de 0.
Quando o usuário informar o número 0, o programa é finalizado*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void config()
{
   system("chcp 65001");
   setlocale(LC_ALL, "pt_BR.UTF-8");
   system("cls");
}

void cabeca()
{
   char text[80] = "1000 a 1";
   int tam = strlen(text);
   int largura = strlen(text) + 2;
   int espaços = (largura - tam) / 2;
   for (int i = 0; i < largura; i++)
   {
      printf("=");
   }
   printf("\n");
   for (int i = 0; i < espaços; i++)
   {
      printf(" ");
   }
   printf("%s\n", text);
   for (int i = 0; i < largura; i++)
   {
      printf("=");
   }
   printf("\n");
}

int main()
{
   config();
   cabeca();
   float med, aux;
   int i=0;
   while (1)
   {
      printf("valor: ");
      scanf("%f", &med);
      if (med == 0)
      {
         break;
      }else{
         i++;
      }
      aux += med;
   }
   med = aux / i;
   printf("%.2f", med);
   return 0;
}
