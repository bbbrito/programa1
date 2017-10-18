#include <stdlib.h>

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
    
    
    system ("pause");    
	return 0;
}
