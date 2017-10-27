#include <stdlib.h>

#include <iostream>
using std::cout;
using std::cin;

int main(int argc, char **argv)
{
	int valor, contador, peso;
    
    valor = 0;
    contador = 10;
    peso = 20;
    
    //Um comando dentro do if não precisa de chaves
    if  (valor >= 0)
        contador = 100;
        
    //Mais de um comando precisa de chaves
    if (valor > 0)
    {
        contador = contador * peso;
        valor = valor + contador;
    }
    
    cout << "\n\n";

    //Pede para o usuário digitar dois valores e informa qual o valor é maior.
    int valor1;
    int valor2;
    
    cout << "Entre com o primeiro valor: ";
    cin >> valor1;
    
    cout << "Entre com o segundo valor: ";
    cin >> valor2;
    
    if ( valor1 > valor2)
        cout << valor1 << " É o maior valor";
        
    else
        cout << valor2 << " É o maior valor";

    
    system ("pause");    
	return 0;
}
