#ifndef Jogador_hpp
#define Jogador_hpp

#include<iostream>
using namespace std;

class Jogador
{
public:
    Jogador(string nome, string nac, string cat,
    int d, int m, int a, float sal);

    void imprime();

    float getSalarioBruto();
    void setSalarioBruto(float sal);

    float getSalarioLiq();
    void setSalarioLiq(float SalarioLiq);

    float getInss();
    float getImposto();

    string getNome();
    void setNome(string nome);

    string getNacionalidade();
    void setNacionalidade(string nac);

    string getCategoria();
    void setCategoria(string cat);

    void setDia(int d);
    void setMes(int m);
    void setAno(int a);
    int getDia();
    int getMes();
    int getAno();

    void CalculaSalario();

    void CalculaAposentadoria();

    int getId();

private:
    string nome;
    int IdJogador;
    string DataNascimento;
    string Nacionalidade;
    string Categoria;

    float SalarioBruto;
    float SalarioLiq;

    float totalInss;
    float totalImposto;

    int static ultimoId;
    int geraId();

    int dia;
    int mes;
    int ano;

};

#endif // Jogador_hpp

