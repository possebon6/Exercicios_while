#include <stdio.h>

int main() 
{

int num;
int somar = 0;

    printf("Digite um número para verificar se é perfeito: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf ("O %d não é. \n", num);
        return 1;
    }

    for (int i = 1; i < num; i++) 
    {
        if (num % i == 0) 
        {
            somar += i;
        }
    }

    if (somar == num) 
    {
        printf("O número %d é perfeito.\n", num);
    } 
    else 
    {
        printf("O %d não é.\n", num);
    }

    return 0;
}