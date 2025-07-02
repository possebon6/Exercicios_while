#include <stdio.h>

int main() 
{
int num, numnat;
int inv = 0;

    printf("Escreva um número para inverter: \n");
    scanf("%d", &num);

    while (num > 0) 
    {
        int numnat = num % 10;             
        inv = inv * 10 + numnat;
        num /= 10;                          
    }

    printf("Nova sequência: %i", inv);

    return 0;
}