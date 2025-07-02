#include <stdio.h>
#include <iostream>

using namespace std;

int main() 
{
    int x, min, max;
    
    printf ("Digite abaixo os números para determinar o menor e o maior. Zero encerra o programa. \n");
    
    if (!(cin >> x) || x == 0) return 0;  

    min = max = x;
    while (cin >> x && x != 0) {
        if (x < min) min = x;
        if (x > max) max = x;
    }
    cout << "O maior número é: " << max << "\n";
    cout << "O menor número é: " << min << "\n";
    return 0;
}