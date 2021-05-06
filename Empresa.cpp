#include "Empresa.hpp"

Empresa::Empresa(string nome)
{
    this->nome = nome;
}

string Empresa::getNome()
{
    return nome;
}

void Empresa::AdicionaTime(Time time)
{
    timesAdm.push_back(time);
}

void Empresa::setNome(string nome)
{
    this->nome = nome;
}

void Empresa::apresentaTimes()
{
    cout << "Times da empresa: " << nome << "\n" << endl;

 for (int j = 0; j < timesAdm.size(); j++)
    {
        timesAdm[j].RelatorioGeral();
        cout << "\n" << endl;
    }
}

//Lista o nome de cada jogador de cada time da empresa
 void Empresa::ListaJogadores()
{
//para cada time desta empresa
//para cada jogador deste time
//listar nome deste jogador
    for(int i = 0; i < timesAdm.size(); i++)
    {
        Time timeTemp = timesAdm[i];
        vector<Jogador> jogadoresTemp = timeTemp.getJogadores();
        for(int j = 0; j < jogadoresTemp.size(); j++)
        {
            Jogador jogadorTemp = jogadoresTemp[j];
            cout << jogadorTemp.getNome() << endl;
        }
    }
}

//recebe um nome imprime as informções do jogador de cada time da empresa
void Empresa::ConsultaNomeJogador(string nome)
{
//para cada time desta empresa
//para cada jogador de mesmo nome
//listar informações deste jogador
    for(int i = 0; i < timesAdm.size(); i++)
    {
        Time timeTemp = timesAdm[i];
        vector<Jogador> jogadoresTemp = timeTemp.getJogadores();
        for(int j = 0; j < jogadoresTemp.size(); j++)
        {

            if(nome == jogadoresTemp[j].getNome())
            {
                  jogadoresTemp[j].imprime();
                  cout << "Jogador pertence ao: " << timesAdm[i].getNome() << endl;
            }
        }
    }
}

void Empresa::ConsultaIdJogador(int id)
{
//para cada time desta empresa
//para cada jogador de mesmo id
//listar informações deste jogador
    for(int i = 0; i < timesAdm.size(); i++)
    {
        Time timeTemp = timesAdm[i];
        vector<Jogador> jogadoresTemp = timeTemp.getJogadores();
        for(int j = 0; j < jogadoresTemp.size(); j++)
        {
            if(id == jogadoresTemp[j].getId())
                {
                    jogadoresTemp[j].imprime();
                    cout << "Jogador pertence ao: " << timesAdm[i].getNome() << endl;
                }
        }
    }
}

//lista os times e apresenta o valor gasto por cada um
void Empresa::RelatorioFinanceiro()
{
//para cada time desta empresa
//para cada jogador do time
//fazer variavel = variavel + salario bruto

    for(int i = 0; i < timesAdm.size(); i++)
    {
                int GastoTotal = 0;
                float inss = 0;
                float imposto = 0;
        Time timeTemp = timesAdm[i];
        vector<Jogador> jogadoresTemp = timeTemp.getJogadores();
        for(int j = 0; j < jogadoresTemp.size(); j++)
        {
            GastoTotal = GastoTotal + jogadoresTemp[j].getSalarioBruto();
            inss = inss + jogadoresTemp[j].getInss();
            imposto = imposto + jogadoresTemp[j].getImposto();
        }
        cout << "\nGasto do time " << timesAdm[i].getNome() << " = " << GastoTotal << "\nGasto com INSS: " << inss << "\nGasto com Imposto Retido: " << imposto << endl;

    }

}
