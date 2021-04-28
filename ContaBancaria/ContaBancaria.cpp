#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Conta{
    int numero_da_conta;
    char nome[200];
    float saldo;
};

void consultaConta(int n_conta, Conta c[2]);
void deposito(int n_conta, Conta c[2], float v_deposito);
//void saque(int n_conta, Conta c[2], float v_saque);

int main(){
    Conta c[2];
    int i,n_conta;

    for(i=0;i<2;i++){
        cout<<"cadastre a conta \n";
        cout<<"Numero...: ";
        cin>>c[i].numero_da_conta;

        cout<<"Nome.....: ";
        cin>>c[i].nome;

        cout<<"Saldo....: ";
        cin>>c[i].saldo;
    }
    cout<<"Digite o nuemeo da conta";
    cin>>n_conta;
    deposito(n_conta, c,15.5);

}

void consultaConta(int n_conta, Conta c[2]){
    int i;
    system("cls");
    for(i=0;i<2;i++){
        if (n_conta == c[i].numero_da_conta){
            cout<<"Conta...: "<<c[i].numero_da_conta<<"\n";
            cout<<"Nome....: "<<c[i].nome<<"\n";
            cout<<"Saldo...: "<<c[i].saldo<<"\n";
        }
    }
}

void deposito(int n_conta, Conta c[2], float v_deposito){
    int i;
    system("cls");
    for(i=0;i<2;i++){
        if (n_conta == c[i].numero_da_conta){
            cout<<"Conta......: "<<c[i].numero_da_conta<<"\n";
            cout<<"Nome.......: "<<c[i].nome<<"\n";
            cout<<"Saldo......: "<<c[i].saldo<<"\n";
            cout<<"\nDeposito...: "<<v_deposito<<"\n";
            cout<<"Novo Saldo :"<<c[i].saldo+v_deposito<<"\n";
        }
    }
}

/*void saque(int n_conta, Conta c[2], float v_saque){

}
*/
