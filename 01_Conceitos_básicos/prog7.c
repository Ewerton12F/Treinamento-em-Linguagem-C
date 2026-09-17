#include <stdio.h> /* Para printf() */
#include <stdlib.h>/* Para system() */
int main()
{
    float lapis=4.875, borrachas=234.542, canetas=42.036,
          cadernos=8.0, fitas=13.05;
    printf("* Tamanho de campo com ponto flutuante *");
    printf("\nLapis        %12.2f",lapis);
    printf("\nBorrachas    %12.2f",borrachas);
    printf("\nCanetas      %12.2f",canetas);
    printf("\nCadernos     %12.2f",cadernos);
    printf("\nFitas        %12.2f\n",fitas);

    printf("%4.2f\n",3456.78);
    printf("%3.2f\n",3456.78);
    printf("%3.1f\n",3456.78);
    printf("%10.3f\n",3456.78);

    printf("\n* Sem tamanho de campo *\n");
    printf("%.2f %.2f %.2f\n",8.0,15.3,584.13);
    printf("%.2f %.2f %.2f\n",834.0,1500.55,4890.21);

    printf("\n* Com tamanho de campo *\n");
    printf("%10.2f %10.2f %10.2f\n",8.0,15.3,584.13);
    printf("%10.2f %10.2f %10.2f\n",834.0,1500.55,4890.21);

    printf("\n* Tamanho de campo e justificado à esquerda *\n");
    printf("%-10.2f %-10.2f %-10.2f\n",8.0,15.3,584.13);
    printf("%-10.2f %-10.2f %-10.2f\n",834.0,1500.55,4890.21);

    printf("\n* Tamanho de campo com cadeias de caracteres *");
    printf("\nOBJETO        %12s","CÓDIGO");
    printf("\nLápis         %12s","WQR");
    printf("\nBorrachas     %12s","ASO");
    printf("\nCanetas       %12s","KPX");
    printf("\nCadernos      %12s","FJI");
    printf("\nFitas         %12s\n","TYE");

    printf("\n* Tamanho de campo e complementando com zeros *");
    printf("\n%04d",21);
    printf("\n%06d",21);
    printf("\n%6.4d",21);
    printf("\n%6.0d\n",21);

    printf("\n* Definindo a base numérica *");
    printf("\n%d",65);
    printf("\n%x",65);
    printf("\n%o",65);
    printf("\n%c",65);

    // system("PAUSE");
    return 0;
}