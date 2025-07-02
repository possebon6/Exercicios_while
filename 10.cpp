#include <stdio.h>
#include <math.h>
#include <vector> 


int main ()
{
    int n1, n2;
    float resultado;
    int resto;
    int x=0, y;
    int vet_bin[100];
    int x_rest = resto;
    
    printf ("Insira os números para efetuar a divisão, o resto será convertido para binário\n");
    printf ("Numero que será dividido: \n");
    scanf ("%d", &n1);
    printf ("Número que dividirá: \n");
    scanf ("%d", &n2);
    printf("Divisão de %d por %d \n", n1, n2);
    
    resultado = n1/n2;
    resto = n1%n2;
    
    printf ("Resultado: %2.f \n", resultado);
    printf ("Resto: %d \n", resto );
    
    while (resto > 0) 
    {
    vet_bin[x] = resto % 2; 
    x = x + 1;
    resto = resto/2;
    }
    
    printf ("Em binário é: ");
	for(y=x-1; y>=0; y--)
	
	printf("%d", vet_bin[y]);
	
	return 0;
}