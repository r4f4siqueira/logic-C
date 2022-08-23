#include <iostream> //biblioteca para fazer soma
#include <string>
using namespace std;//configuração para poder usar uma sintax mais simples

//Definindo variavel
int idade;
string nome;

//abaixo temos a funcao mais que mostra na tela uma mensagem
int main(){
    cout<<"Informe o Nome\n";
    cin>>nome;
    cout<<"Informe o ano de nascimento:\n";
    cin>>idade;
    idade = 2022 - idade;
    cout<<"\nNome..:  "<<nome<<"\n";
    cout<<"Idade.:  "<<idade;

    return 0;
}
//cout = mostrar coisas na tela
//cin = espera o usuario digitar algo
// \n para pular uma linha
