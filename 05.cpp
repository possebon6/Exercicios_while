#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int numero, num;
    int par =0;
    int impar = 0;
    
    printf ("Digite uma sequência numérica: \n");
    scanf("%i", &numero);
   
   numero = abs (numero);
   
   if (numero == 0)
   {
       par = 1;
   }
   else {
       while (numero != 0)
       {
           num = numero % 10;
            if (num % 2 == 0) 
            {
            par ++;
            }
        else {
        impar ++;
            }
            numero /=10;
       }
   }

    printf ("São %d dígitos pares \n", par);
    printf ("São %d dígitos ímpares \n", impar);
    
    return 0;
    
}