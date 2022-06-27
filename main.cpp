#include "Banco.h"

using namespace std;

void menu (){
    system("clear");
    cout<< "1 - Inserir Cliente \n ";
    cout<< "2 - Excluir Cliente \n ";
    cout<< "3 - Listar Clientes Preferenciais \n ";
    cout<< "4 - Listar Clientes Comuns \n";
    cout<< "5 - Listar Quantidade Prefenciais \n";
    cout<< "6 - Listar Quantidade Comuns \n";
    cout<< "7 - Sair \n";
    cout<< "Escolha a sua opção: ";
};
int main(){
    Banco **P, **C, B;
    P = new Banco* [2];
    C = new Banco* [2];
    P[0] == NULL;
    P[1] == NULL;
    C[0] == NULL;
    C[1] == NULL;
    string nome;
    int idade, op, Tipo;
    do{
       menu();
       cin>>op;
       switch(op) {
        case 1:
            cout<< "Informe o nome: ";
            cin>> nome;
            cout<< "Informe a Idade:";
            cin >> idade;
            if (idade >= 60)
                P = B.Inserir(P, nome, idade);
            else
                C = B.Inserir(C, nome, idade);
            cout<<"Inserido com Sucesso";
            break;
        case 2:
            cout<< "Informe o tipo 1- Preferencial ou 2 Comum:";
            cin>> Tipo;
            if(Tipo == 1)
                P[0] = B.Excluir(P[0]);
            else
                C[0] = B.Excluir(C[0]);
            cout << "excluido com sucesso";
            break;
        case 3:
            if(P[0] != NULL)
                B.Listar(P[0]);
            else
                cout << "Fila Vazia";
            break;
        case 4:
            if(C[0] != NULL)
                B.Listar(C[0]);
            else
                cout<<"Fila Vazia";
            break;
        case 5:
            if(P[0] != NULL)
                cout << "Total Preferenciais: " << B.Quantidade(P[0]);
            else
                cout << "Fila Vazia";
            break;
        case 6:
            if(C[0] != NULL)
                cout<< "Total Comuns: "<< B.Quantidade (C[0]);
            else
                cout << "Fila Vazia";
            break;
        case 7:
            cout << "Tchau !!";
            break;
        default:
            cout << "Opçao Invalida";

            }
            cin.ignore().get();

       } while(op != 7);
       return 0;


}
