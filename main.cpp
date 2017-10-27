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

    
    //Pede para o usuário digitar idade e sexo e informa se deve ser aplicada vacina.
    int idade;
    char sexo;

    
    cout << "Entre com a idade da pessoa: ";
    cin >> idade;

    cout << "Entre com o sexo da pessoa (M) ou (S): ";
    cin >> sexo;


    //Apenas homens que tenham abaixo de 20 anos e acima de 60 devem tomar a vacina
    
    if(sexo == 'M' && (idade < 20 || idade > 60)
    
        cout << "Aplicar a vacina.\n";
    else
        cout << "Não aplicar a vacina.\n";


    //Exercitando o operador :?
    int valor, peso;

    
    cout << "Entre com o valor do peso:\n ";
    cin >> peso;


    //Operador ?:
    valor = (peso >= 100? -1 : 10);
    
    cout << "Foi atribuído " << valor << " ao valor.\n";

   
    int peso_2, valor_2;
    cout << "Entre com o valor do segundo peso:\n ";
    cin >> peso_2;


    //Operador ?:

    valor_2 = (peso >= 100 && peso_2 <= 10 ? -10 : 1000);

    cout << "Foi atribuído " << valor_2 << " a valor_2.\n";



    //Uso de operador abreviado
    int valor, contador, peso;
    
    valor = 0;
    contador = 10;
    peso = 20;
    
        
    //Mais de um comando precisa de chaves
    if (valor > 0)
    {
    //Mudança para o operador abreviado
        contador *= peso;

    //Mudança para o operador abreviado
        valor += contador;
    }


    //Atividade de incremento e decremento
    int count;
    int var1;

    count = 0;
    
    //Pos-incremento
    var1 = count++;
    
    cout << "O valor de var1 eh: " << var1 << '\n';
    cout << "O valor de count eh: " << count << '\n';

    cout << "\n\n";


    //Pré-incremento
    var1 = ++count;
    
    cout << "O valor de var1 eh: " << var1 << '\n';
    cout << "O valor de count eh: " << count << '\n';


    int count_2;
    int var2;
    count_2 = 10;
    
    //Pos-decremento
    var2 = count_2--;
    
    cout << "O valor de var2 eh: " << var2 << '\n';
    cout << "O valor de count_2 eh: " << count_2 << '\n';

    cout << "\n\n";


    //Pré-decremento
    var2 = --count_2;
    
    cout << "O valor de var2 eh: " << var2 << '\n';
    cout << "O valor de count_2 eh: " << count_2 << '\n';

    system ("pause");    
	return 0;
}
