#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    float notas=0;
    float somanotas=0;
    float media;
    int qntsnotas=0;
    
    printf ("Digite as notas para cálculo da média: \n");
    
    while (notas <=10)
    {
    printf("Nota: \n");
    scanf("%f", &notas);
        if (notas > 10) {
            break;
        }
        
    somanotas += notas;
    qntsnotas++;
    }
    media = somanotas/qntsnotas;
    printf ("A média é: %f", media);
   
   return 0;
}