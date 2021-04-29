#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

struct Conta{
    int numero_da_conta;
    string nome;
    float saldo;
};

void cadastrarConta(int cont, Conta c[10]);
int consultaConta(int n_conta, Conta c[10]);
void deposito(int n_conta, Conta c[10]);
void saque(int n_conta, Conta c[10]);

int main(){
    Conta c[10];
    int cont=0,n_conta,opc;

    do{
        cout<<"Informe oque deseja fazer:\n";
        cout<<"1-Cadastrar conta\n";
        cout<<"2-Mostrar Conta\n";
        cout<<"3-Depositar\n";
        cout<<"4-Sacar\n";
        cout<<"0-Sair\n";
        cin>>opc;

        switch(opc){

            case 1:
            {
                cadastrarConta(cont,c);
                cont++;
                break;
            }

            case 2:
            {
                system("cls");
                cout<<"Informe o numero da conta para CONSULTAR: ";
                cin>>n_conta;
                consultaConta(n_conta,c);
                break;
            }

            case 3:
            {
                cout<<"Informe o numero da conta para DEPOSITAR: ";
                cin>>n_conta;
                deposito(n_conta,c);
                break;
            }

            case 4:
            {
                cout<<"Informe o numero da conta para SACAR: ";
                cin>>n_conta;
                saque(n_conta,c);
                break;
            }

            case 0:
            {
                system("cls");
                cout<<"Fim do PROGRAMA";
                break;
            }

            default:
            {
                system("cls");
                cout<<"\nOpcao INVALIDA\n\n";
                break;
            }

        }
    }while(opc!=0);
}

void cadastrarConta(int cont, Conta c[10]){
    system("cls");
    if(cont<=10){
        cout<<"cadastre a conta \n";
        cout<<"Numero...: ";
        cin>>c[cont].numero_da_conta;

        cout<<"Nome.....: ";
        fflush(stdin);
        getline(cin,c[cont].nome);

        cout<<"Saldo....: ";
        cin>>c[cont].saldo;

        cout<<"\nConta cadastrada\n\n";
    }
    else{
        cout<<"Conta nao cadastrada";
        cout<<"Numero maximo de contas atingido";
    }
}

int consultaConta(int n_conta, Conta c[10]){
    int i;
    system("cls");
    for(i=0;i<10;i++){
        if (n_conta == c[i].numero_da_conta){
            cout<<"Conta...: "<<c[i].numero_da_conta<<"\n";
            cout<<"Nome....: "<<c[i].nome<<"\n";
            cout<<"Saldo...: "<<c[i].saldo<<"\n";
            return 1;
        }
        else{
            if(i==9){
                cout<<"\nconta NAO ENCONTRADA\n\n";
                return 0;
            }
        }
    }
}

void deposito(int n_conta, Conta c[10]){
    int i;
    float v_deposito;
    system("cls");
    for(i=0;i<10;i++){
        if (n_conta == c[i].numero_da_conta){
            //Mostra os dados da conta encontrada;
            cout<<"Conta......: "<<c[i].numero_da_conta<<"\n";
            cout<<"Nome.......: "<<c[i].nome<<"\n";
            cout<<"Saldo......: "<<c[i].saldo<<"\n";
            //pede o valor para deposito
            cout<<"Informe o valor a ser DEPOSITADO: ";
            cin>>v_deposito;
            //somando o saldo atual com o valor do deposito
            c[i].saldo=c[i].saldo+v_deposito;
            cout<<"Novo Saldo :"<<c[i].saldo<<"\n";
        }
    }
}

void saque(int n_conta, Conta c[10]){
    int i;
    float v_saque;
    system("cls");
    for(i=0;i<10;i++){
        if (n_conta == c[i].numero_da_conta){
            //Mostra os dados da conta encontrada;
            cout<<"Conta......: "<<c[i].numero_da_conta<<"\n";
            cout<<"Nome.......: "<<c[i].nome<<"\n";
            cout<<"Saldo......: "<<c[i].saldo<<"\n";
            //pede o valor para sacar
            cout<<"Informe o valor a ser SACADO: ";
            cin>>v_saque;
            //subtraindo o saldo atual com o valor do saque
            c[i].saldo=c[i].saldo-v_saque;
            cout<<"Novo Saldo :"<<c[i].saldo<<"\n";
        }
    }
}

