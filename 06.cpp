#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() 
{
    int primeironum = 0;
    int segundonum = 1;
    int sequencia;
    
    printf ("Até o 20 Fibonacci: \n");

    for (int i = 1; i <= 20; i++) 
    {
        printf ("%i ", primeironum);
        sequencia = primeironum + segundonum;

        primeironum = segundonum;
        segundonum = sequencia;
    }

   
    return 0;
}