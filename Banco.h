#include <iostream>

class Banco
{
    public:
        Banco** Inserir (Banco**, std::string, int);
        Banco* Excluir (Banco*);
        void Listar (Banco*);
        int Quantidade (Banco*);

    private:
        std::string nome;
        int Idade , Tipo;
        Banco *Elo;

};
