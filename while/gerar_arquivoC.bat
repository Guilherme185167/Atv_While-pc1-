@echo off

:: Nome do arquivo de saída
set nomeArquivo=06-matrix.c

echo /**/ > %nomeArquivo%
echo #include ^<stdio.h^> >> %nomeArquivo%
echo #include ^<stdlib.h^> >> %nomeArquivo%
echo #include ^<locale.h^> >> %nomeArquivo%
echo #include ^<string.h^> >> %nomeArquivo%
echo. >> %nomeArquivo%
echo void config(){ >> %nomeArquivo%
echo    system("chcp 65001"); >> %nomeArquivo%
echo    setlocale(LC_ALL, "pt_BR.UTF-8"); >> %nomeArquivo%
echo    system("cls"); >> %nomeArquivo%
echo } >> %nomeArquivo%
echo. >> %nomeArquivo%
echo void cabeca(){ >> %nomeArquivo%
echo    char text[80] = "Exemplo"; >> %nomeArquivo%
echo    int tam = strlen(text); >> %nomeArquivo%
echo    int largura  = strlen(text) + 2; >> %nomeArquivo%
echo    int espaços = (largura - tam) / 2; >> %nomeArquivo%
echo    for(int i = 0; i ^< largura; i++)^{printf("=");^} >> %nomeArquivo%
echo    printf("\n"); >> %nomeArquivo%
echo    for (int i = 0; i ^< espaços; i++) ^{printf(" ");^} >> %nomeArquivo%
echo    printf("%%s\n", text); >> %nomeArquivo%
echo    for(int i = 0; i ^< largura; i++)^{printf("=");^} >> %nomeArquivo%
echo    printf("\n"); >> %nomeArquivo%
echo } >> %nomeArquivo%
echo. >> %nomeArquivo%
echo int main (){ >> %nomeArquivo%
echo     config(); >> %nomeArquivo%
echo     cabeca(); >> %nomeArquivo%
echo return 0; >> %nomeArquivo%
echo } >> %nomeArquivo%

echo Código C foi escrito em %nomeArquivo%

