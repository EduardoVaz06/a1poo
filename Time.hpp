#ifndef Time_hpp
#define Time_hpp

#include<iostream>
#include "Jogador.hpp"
#include <vector>

using namespace std;

class Time
{
public:
    Time(string nome, string cat);
    void RelatorioGeral();

    string getNome();
    void setNome(string nome);

    string getCategoria();
    void setCategoria(string cat);

    vector<Jogador> getJogadores();

    void adicionaJogador(Jogador jogador);

private:
    string nome;
    int IdTime;
    string Categoria;

    vector<Jogador> listaJogadores;

    int static ultimoId;
    int geraId();
};
#endif // Time_hpp


