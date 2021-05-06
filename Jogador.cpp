#include "Jogador.hpp"
#include <math.h>

int Jogador::ultimoId = 0;

Jogador::Jogador(string nome, string nac, string cat, int d, int m, int a, float sal)
{
    this->nome = nome;
    this->Categoria = cat;
    this->Nacionalidade = nac;
    this->dia = d;
    this->mes = m;
    this->ano = a;
    this->SalarioBruto = sal;

    this->IdJogador = geraId();
}

void Jogador::imprime()
{
    cout << IdJogador << " - Nome: " << nome << "\n    Categoria: " << Categoria << "\n    Nacionalidade: "
     << Nacionalidade << "\n    Salario Bruto: " << SalarioBruto << "\n    Salario Liquido: " <<
     SalarioLiq << endl;
    cout << "    Data de nascimento: " << dia << "/" << mes << "/" << ano << endl;

}

int Jogador::geraId()
{
    ultimoId++;
    return ultimoId;
}

int Jogador::getId()
{
    return ultimoId;
}

string Jogador::getNome()
{
    return nome;
}

void Jogador::CalculaAposentadoria()
{
    int Idade, TempoRestante;

    Idade = 2021-ano;
    TempoRestante = 60-Idade;

    cout << "Jogador " << nome << " possui " << Idade << " anos. Faltam " << TempoRestante << " anos para a aposentadoria\n" << endl;
}

string Jogador::getNacionalidade()
{
    return Nacionalidade;
}

string Jogador::getCategoria()
{
    return Categoria;
}

float Jogador::getSalarioBruto()
{
    return SalarioBruto;
}

float Jogador::getSalarioLiq()
{
    return SalarioLiq;
}

float Jogador::getInss()
{
    return totalInss;
}

float Jogador::getImposto()
{
    return totalImposto;
}

void Jogador::setNome(string nome)
{
    this->nome = nome;
}

void Jogador::setNacionalidade(string nac)
{
    this->Nacionalidade = nac;
}

void Jogador::setCategoria(string cat)
{
    this->Categoria = cat;
}

void Jogador::setSalarioBruto(float sal)
{
    this->SalarioBruto = sal;
}

void Jogador::setSalarioLiq(float SalarioLiq)
{
    this->SalarioLiq = SalarioLiq;
}
void Jogador::setDia(int d)
{
    dia = d;
}
void Jogador::setMes(int m)
{
    mes = m;
}
void Jogador::setAno(int a)
{
    ano = a;
}

void Jogador::CalculaSalario()
{
    float desconto1, desconto2, Salario;

   Salario = this->SalarioBruto;

   if (Salario < 1100.0){
    desconto1 = Salario - (Salario*0.075);
    Salario = desconto1;
    this->SalarioLiq = Salario;
    this->totalInss = (this->SalarioBruto*0.075);

    }else if (Salario < 2000 && Salario >= 1100.0){
        desconto1 = Salario*(0.090);
        desconto2 = Salario*(0.075);
        Salario = Salario - (desconto1 + desconto2);
            this->SalarioLiq = Salario;
            this->totalInss = desconto1;
            this->totalImposto = desconto2;

      }else if (Salario < 3100 && Salario >= 2000.0){
           desconto1 = Salario*(0.12);
           desconto2 = Salario*(0.15);
           Salario = Salario - (desconto1 + desconto2);
                this->SalarioLiq = Salario;
                this->totalInss = desconto1;
                this->totalImposto = desconto2;
        }else if (Salario < 4100 && Salario >= 3100.0){

             desconto1 = Salario*(0.14);
             desconto2 = Salario*(0.22);
             Salario = Salario - (desconto1 + desconto2);
                 this->SalarioLiq = Salario;
                 this->totalInss = desconto1;
                 this->totalImposto = desconto2;

          }else if (Salario >= 4100.0){
               desconto1 = Salario*(0.14);
               desconto2 = Salario*(0.27);
               Salario = Salario - (desconto1 + desconto2);
                   this->SalarioLiq = Salario;
                   this->totalInss = desconto1;
                   this->totalImposto = desconto2;
               }

}

