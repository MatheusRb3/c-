#include <iostream>
using namespace std;

int main() 
{

    //nome, sexo, idade, peso, altura, tipo sanguineo, data de nascimento
    string nome, tipo_sanguineo, data_nascimento;
    char sexo;
    int idade;
    long long int cpf;
    float peso, altura;


    cout << "Informe o nome do paciente: ";
    cin >> nome;

    cout << "Informe o CPF do paciente: ";
    cin >> cpf;

    cout << "Informe o sexo do paciente: \n";
    cout << "M - Masculino \n";
    cout << "F - Feminino \n";
    cin >> sexo;

    cout << "Informe a idade do paciente: ";
    cin >> idade;

    cout << "Informe a data de nascimento do paciente: ";
    cin >> data_nascimento;

    cout << "Informe a altura do paciente: ";
    cin >> altura;

    cout << "Informe o peso do paciente: ";
    cin >> peso;

    cout << "Qual o tipo sanguineo do paciente: ";
    cin >> tipo_sanguineo;

    cout << "Paciente cadastrado com sucesso! \n";
    cout << "Segue os dados do paciente abaixo: \n";
    cout << "Nome: " << nome << endl;
    cout << "CPF: " << cpf << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Idade: " << idade << endl;
    cout << "Data de nascimento: " << data_nascimento << endl;
    cout << "Altura: " << altura << endl;
    cout << "Peso: " << peso << endl;
    cout << "Tipo sanguineo: " << tipo_sanguineo << endl;


    return 0;

}