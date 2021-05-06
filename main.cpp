#include "Time.hpp"
#include "Empresa.hpp"

int main()
{
    Time t1("Inter", "Profissional");//cria time

    Jogador j1 ("Dale", "Argentina", "Profissional", 24, 07, 2000, 2000);//cria jogador
    j1.CalculaSalario();//calcula salario liquido

    Jogador j2 ("Taison", "Brasil", "Profissional", 16, 10, 2001, 4000);//cria jogador
    j2.CalculaSalario();//calcula salario liquido

    t1.adicionaJogador(j1);//adiciona ao time
    t1.adicionaJogador(j2);//adiciona ao time

    cout << ">>Relatorio Geral do time 1<<\n" << endl;

    t1.RelatorioGeral();//Relatorio Geral (detalhes e financeiro)

    cout << "\n>>Calcula idade e tempo pra aposentadoria e imprime<<\n" << endl;

    j1.CalculaAposentadoria();//calcula idade e tempo para aposentar
    j2.CalculaAposentadoria();//calcula idade e tempo para aposentar

    cout << "\n" << endl;

    Time t2("Inter B", "Base");//cria time

    Jogador j3 ("Eduardo", "Brasil", "Base", 05, 05, 1998, 1500);//cria jogador
    j3.CalculaSalario();//calcula salario liquido

    Jogador j4 ("Vini", "Brasil", "Base", 18, 11, 1997, 3150);//cria jogador
    j4.CalculaSalario();//calcula salario liquido

    t2.adicionaJogador(j3);//adiciona ao time
    t2.adicionaJogador(j4);//adiciona ao time

    cout << ">>Relatorio Geral do time 2<<\n" << endl;

    t2.RelatorioGeral();//Relatorio Geral (detalhes e financeiro)

    cout << "\n>>Calcula idade e tempo pra aposentadoria e imprime<<\n" << endl;

    j3.CalculaAposentadoria();//calcula idade e tempo para aposentar
    j4.CalculaAposentadoria();//calcula idade e tempo para aposentar

    Empresa e1("InternacionalCORP");

    e1.AdicionaTime(t1);
    e1.AdicionaTime(t2);

    cout << "\n>>Lista de Jogadores da Empresa<<" << endl;

    e1.ListaJogadores();

    cout << "\n>>Consulta nome do jogador e imprime suas informacoes<<" << endl;

    e1.ConsultaNomeJogador("Dale");

    cout << "\n" << endl;

    e1.ConsultaNomeJogador("Eduardo");

    cout << "\n>>Imprime informacoes sobre gastos dos times da empresa<<" << endl;

    e1.RelatorioFinanceiro();


    return 0;
}
