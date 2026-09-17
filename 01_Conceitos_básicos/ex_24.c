/*
24. Reescreva o programa que desenha uma moldura na tela para que ele apresente uma
moldura similar, mas com quatro caracteres de largura e quatro de altura.
Desenha moldura
#include <stdio.h>  Para printf() 
#include <stdlib.h> Para system()
int main() {
    system("cls");
    printf("\n\n");
    printf("\n\t\xC9\xCD\xBB");
    printf("\n\t\xBA \xBA");
    printf("\n\t\xC8\xCD\xBC");
    printf("\n\n");
    system("PAUSE");
    return 0;
}
*/
#include <stdio.h> /* Para printf() */
#include <stdlib.h>/* Para system() */
int main() {
    system("cls");/* Limpa a tela */
    printf("\n\n");
    printf("\n\t\xC9\xCD\xCD\xBB");
    printf("\n\t\xBA  \xBA");
    printf("\n\t\xBA  \xBA");
    printf("\n\t\xC8\xCD\xCD\xBC");
    printf("\n\n");
    system("PAUSE");
    return 0;
}