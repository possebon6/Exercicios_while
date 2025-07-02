#include <stdio.h>
int main ()
{
    int x;
    int soma = 0;
    
    do {
    printf ("Digite um número: \n"); 
    scanf ("%d", &x);
    soma += x;
    } while (x>0);
    printf ("A soma dos fatores é: %d", soma);
    
    return 0;
}