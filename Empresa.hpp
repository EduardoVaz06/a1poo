#ifndef Empresa_hpp
#define Empresa_hpp

#include "Jogador.hpp"
#include "Time.hpp"
#include <vector>

using namespace std;

class Empresa
{
public:
    Empresa(string nome);

    void ConsultaNomeJogador(string busca);
    void ConsultaIdJogador(int id);

    void ListaJogadores();

    void RelatorioFinanceiro();

    void AdicionaTime(Time time);

    string getNome();
    void setNome(string nome);

    void apresentaTimes();

private:
    string nome;
    vector<Time> timesAdm;
};
#endif // Time_hpp



