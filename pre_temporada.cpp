#include <iostream>
#include <locale.h>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Portuguese");

    //quatro times se enfrentam, os dois colocados se enfrentam para ver quem é o campeão.
    string times[4];
    int posicao[4];
    int pontos[4] = {0, 0, 0, 0};
    int vitorias[4] = {0, 0, 0, 0};
    int empates[4] = {0, 0, 0, 0};
    int derrotas[4] = {0, 0, 0, 0};
    string final[2];
    int times_final = 0;
    int campeao;
    int resultado;

    cout << "Pré temporada começou! \n";

    for(int x = 0; x < 4; x++)
    {

        cout << "Informe o nome do " << x+1 << "° time: ";
        getline(cin, times[x]);


    }

    for(int x = 0; x < 4; x++)
    {


        cout << "Informe o resultado da primeira partida do " << times[x] << ": \n";
        cout << "1 - vitória, 2 - Empate, 3 - Derrota \n";
        cin >> resultado;

        if(resultado == 1)
        {

            pontos[x] += 3;

            vitorias[x] += 1;

        }
        else if(resultado == 2)
        {

            pontos[x] += 1;

            empates[x] += 1;

        }
        else
        {

            derrotas[x] += 1;

        }


        cout << "Informe o resultado da segunda partida do " << times[x] << ": \n";
        cout << "1 - vitória, 2 - Empate, 3 - Derrota \n";
        cin >> resultado;

        if(resultado == 1)
        {

            pontos[x] += 3;

            vitorias[x] += 1;

        }
        else if(resultado == 2)
        {

            pontos[x] += 1;

            empates[x] += 1;

        }
        else
        {

            derrotas[x] += 1;

        }

        cout << "Informe o resultado da terceira partida do " << times[x] << ": \n";
        cout << "1 - vitória, 2 - Empate, 3 - Derrota \n";
        cin >> resultado;

        if(resultado == 1)
        {

            pontos[x] += 3;

            vitorias[x] += 1;

        }
        else if(resultado == 2)
        {

            pontos[x] += 1;

            empates[x] += 1;

        }
        else
        {

            derrotas[x] += 1;

        }

        cout << "Informa em qual posição terminou o " << times[x] << ": ";
        cin >> posicao[x];

    }

    for(int x = 0; x < 4; x++)
    {


            cout << "O " << times[x] << " terminou em " << posicao[x] << "° lugar com " << pontos[x] << " pontos " << vitorias[x] << " vitórias " << empates[x] << " empates e " << derrotas[x] << " derrotas!" << endl;
            cout << endl;


            if(posicao[x] == 1 || posicao[x] == 2)
            {

                final[times_final] = times[x];

                times_final += 1;

            }

    }

    cout << "Os times " << final[0] << " e " << final[1] << " se enfrentarão para ver quem é o campeão da pré temporada!" << endl;

    cout << "Quem foi campeão da pré temporada?" << endl;
    cout << "1 - " << final[0] << endl;
    cout << "2 - " << final[1] << endl;
    cin >> campeao;

    cout << "Parabéns ao " << final[campeao-1] << " pelo titulo na pré temprada!" << endl;


    return 0;

}