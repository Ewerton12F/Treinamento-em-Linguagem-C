/*
4. Qual será a impressão obtida por cada uma das seguintes instruções?
a) printf("\n\tBom dia! Shirley.");
b) printf("Você já tomou café? \n");
c) printf("\n\nA solução não existe!\nNão insista.");
d) printf("Duas\tlinhas\tde\tsaída\nou\tuma?");
e) printf("%s\nXs\n%s\n". "um"."dois","três");
*/
#include <stdio.h>

int main() {
    printf("\n\tBom dia! Shirley.");
    printf("\n");
    printf("Você já tomou café? \n");
    printf("\n");
    printf("\n\nA solução não existe!\nNão insista.");
    printf("\n");
    printf("Duas\tlinhas\tde\tsaída\nou\tuma?");
    printf("\n");
    printf("%s\n%s\n%s\n", "um","dois","três");
}