#include <stdio.h>
int main ()
{
    int x;
    int fat = 1;
    
    
    printf ("Digite um número: \n"); 
    scanf ("%d", &x);
    
    
    while (x>0)
    {
     fat*=x;
     x--;
    }
    printf ("%i", fat);
    return 0;
}