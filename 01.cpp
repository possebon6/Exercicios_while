#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int num;
    
    cout << "Digite um número para a contagem regressiva: \n"; 
    cin >> num;
    
    while (num>=0)
    {
        cout << num << endl;
        num--;
        
    }
    return 0;
}