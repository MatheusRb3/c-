#include <iostream>
#include <locale.h>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Portuguese");

    //quatro times se enfrentam, os dois colocados se enfrentam para ver quem � o campe�o.
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

    cout << "Pr� temporada come�ou! \n";

    for(int x = 0; x < 4; x++)
    {

        cout << "Informe o nome do " << x+1 << "� time: ";
        getline(cin, times[x]);


    }

    for(int x = 0; x < 4; x++)
    {


        cout << "Informe o resultado da primeira partida do " << times[x] << ": \n";
        cout << "1 - vit�ria, 2 - Empate, 3 - Derrota \n";
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
        cout << "1 - vit�ria, 2 - Empate, 3 - Derrota \n";
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
        cout << "1 - vit�ria, 2 - Empate, 3 - Derrota \n";
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

        cout << "Informa em qual posi��o terminou o " << times[x] << ": ";
        cin >> posicao[x];

    }

    for(int x = 0; x < 4; x++)
    {


            cout << "O " << times[x] << " terminou em " << posicao[x] << "� lugar com " << pontos[x] << " pontos " << vitorias[x] << " vit�rias " << empates[x] << " empates e " << derrotas[x] << " derrotas!" << endl;
            cout << endl;


            if(posicao[x] == 1 || posicao[x] == 2)
            {

                final[times_final] = times[x];

                times_final += 1;

            }

    }

    cout << "Os times " << final[0] << " e " << final[1] << " se enfrentar�o para ver quem � o campe�o da pr� temporada!" << endl;

    cout << "Quem foi campe�o da pr� temporada?" << endl;
    cout << "1 - " << final[0] << endl;
    cout << "2 - " << final[1] << endl;
    cin >> campeao;

    cout << "Parab�ns ao " << final[campeao-1] << " pelo titulo na pr� temprada!" << endl;


    return 0;

}