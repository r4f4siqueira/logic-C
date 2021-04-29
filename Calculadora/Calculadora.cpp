#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
//declarando os prototipos
void soma(float a, float b);
void subtrai(float a, float b);
void divide(float a, float b);
void multiplica(float a, float b);

int main(){
    float a,b;
    int opc;
    do{
        cout<<"\nInforme oque deseja fazer:\n";
        cout<<"1-Somar\n";
        cout<<"2-Subtrair\n";
        cout<<"3-Dividir\n";
        cout<<"4-Multiplicar\n";
        cout<<"0-SAIR\n";
        cin>>opc;

        if(opc>0 && opc<5){
            cout<<"Informe dois valores:\n";
            cout<<"Valor 1:";
            cin>>a;
            cout<<"Valor 2:";
            cin>>b;
        }

        switch(opc){

            case 1:
                soma(a,b);
                break;

            case 2:
                subtrai(a,b);
                break;

            case 3:
                divide(a,b);
                break;

            case 4:
                multiplica(a,b);
                break;

            case 0:
                cout<<"Fim do programa";
                break;

            default :
            {
                system("cls");
                cout<<"Opcao INVALIDA";
                cout<<"\n----------------------";
                break;
            }
        }
    }while(opc!=0);
    return 0;
}
//functions
//case 1
void soma(float a, float b){
    system("cls");
    cout<<"Resultado da SOMA:"<<a+b;
    cout<<"\n----------------------";
}
//case 2
void subtrai(float a, float b){
    system("cls");
    cout<<"Resultado da SUBTRACAO:"<<a-b;
    cout<<"\n-----------------------------";
}
//case 3
void divide(float a, float b){
    system("cls");
    cout<<"resultado da DIVISAO:"<<a/b;
    cout<<"\n--------------------------";
}
//case 4
void multiplica(float a, float b){
    system("cls");
    cout<<"Resultado da MULTIPLICACAO:"<<a*b;
    cout<<"\n-----------------------------";
}
