#include "Time.hpp"

int Time::ultimoId = 99;

Time::Time(string nome, string cat)
{
    this->nome = nome;
    this->Categoria = cat;

    this->IdTime = geraId();
}

void Time::adicionaJogador(Jogador jogador)
{
    listaJogadores.push_back(jogador);
}

void Time::RelatorioGeral()
{
   cout << IdTime << " - " << nome << " - " << Categoria << endl;
   for (int i = 0; i < listaJogadores.size(); i++)
   {
       listaJogadores[i].imprime();
   }
}

int Time::geraId()
{
    ultimoId++;
    return ultimoId;
}

string Time::getNome()
{
    return nome;
}

string Time::getCategoria()
{
    return Categoria;
}

void Time::setNome(string nome)
{
    this->nome = nome;
}

void Time::setCategoria(string cat)
{
    this->Categoria = cat;
}

vector<Jogador> Time::getJogadores()
{
    return listaJogadores;
}

