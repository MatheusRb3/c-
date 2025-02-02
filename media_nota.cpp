#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main() 
{

    setlocale(LC_ALL, "Portuguese");    

    string nomes[50];
    int turma;
    float notas1[50];
    float notas2[50];
    float notas3[50];
    float notas4[50]; 
    float medias[50];
    float media_aprovacao = 6;
    int quantidade_alunos = 0;

    cout << "Informe a turma: ";
    cin >> turma;

    cout << "Digite a quantidade de alunos da turma " << turma << ":";
    cin >> quantidade_alunos;

    for(int x = 0; x < quantidade_alunos; x++)
    {

        cout << fixed << setprecision(1);

        cout << "Informe o nome do " << x+1 << "° aluno: ";
        cin >> nomes[x];

        cout << "Informe a nota da primeira prova de " << nomes[x] << ": ";
        cin >> notas1[x];

        cout << "Informe a nota da segunda prova de " << nomes[x] << ": ";
        cin >> notas2[x];

        cout << "Informe a nota da terceira prova de " << nomes[x] << ": ";
        cin >> notas3[x];

        cout << "Informe a nota da ultima prova de " << nomes[x] << ": ";
        cin >> notas4[x];

        medias[x] = (notas1[x] + notas2[x] + notas3[x] + notas4[x])/4;

        if(medias[x] >= media_aprovacao)
        {

            cout << "Parabéns " << nomes[x] << " foi aprovado com a média " << medias[x] << "!" << endl;
            cout << endl;

        }
        else
        {

            cout << "Infelizmente " << nomes[x] << " foi reprovado com a média " << medias[x]  << "!" << endl;
            cout << endl;

        }

    }


    return 0;
}