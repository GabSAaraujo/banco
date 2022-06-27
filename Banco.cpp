#include "Banco.h"

Banco** Banco::Inserir(Banco **R, std::string N, int I) {
    Banco *novo = new Banco ();
    novo -> nome  = N;
    novo -> Idade = I;
    if(novo->Idade >= 60)
        novo->Tipo = 1;
    else
        novo->Tipo = 2;
    if(R[0]==NULL)
       R[0]=novo;
    else
        R[1] -> Elo = novo;
    R[1] = novo;
    return R;
};

Banco* Banco::Excluir(Banco *I) {
    Banco *aux = I;
    I = I -> Elo;
    delete(aux);
    return I;
};
void Banco::Listar(Banco *I) {
    Banco *aux = I;
    std::string T;
    if(aux -> Tipo == 1)
        T = "Cliente Preferencial";
    else
        T = "Cliente Comum";
    while(aux != NULL){
        std::cout << aux->nome << " "<< aux->Idade << " " << T << "\n";
        aux = aux -> Elo;
    }
};
int Banco::Quantidade(Banco *I){
    Banco *aux = I;
    int Quant = 0;
    while(aux != NULL){
        Quant ++;
        aux = aux -> Elo;
        }
        return Quant;

};
