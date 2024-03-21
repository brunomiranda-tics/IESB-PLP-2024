/*
*
Instituição: IESB
Disciplina:  Paradigmas de Linguagens de Programação (PLP)
Objetivo:    Fornecer conhecimentos e práticas de paradigmas de programação.
Professor:   Bruno Miranda [bruno.marcos@iesb.edu.br]
Data:        Mar2024

# Prática: Tipos de Dados

# Exemplo: Uso de Strings em C++
*
*/

#include <iostream>
#include <string>

using namespace std;


int main() {

  // criando constantes
  const string kMensagemSucesso = "Mensagem em obj const!";
  cout << kMensagemSucesso << endl;

  // characters
  char a = 65, b = 66, c = 67;
  cout << a;
  cout << b;
  cout << c << endl;

  // usando string
  string meu_obj_string = "meu obj string";
  cout << meu_obj_string << endl;

  // string concatenation
  string nome = "Fulano ";
  string sobrenome = "de Tal";
  string nome_completo = nome + sobrenome;

  cout << nome_completo << endl;

  // append
  string nome_meio = "de Tal";
  cout << nome.append(nome_meio) << endl;

  // string length
  string nome_todo = "Joao Qualquer da Silva de Tal";
  cout << "Meu nome tem " << nome_todo.size() << " caracteres." << endl;

  // access Strings
  cout << "access String..." << endl;
  string str_teste_access = "um obj String teste.";
  cout << "->> string original " << str_teste_access << endl;

  cout << "->> indice [0] " << str_teste_access[0] << endl;

  str_teste_access[3] = 'O';
  cout << "->> indice [3] " << str_teste_access[3] << endl;

  // user input Strings
  string str_input_usr = "";
  cout << "Vamos receber o primeiro parâmetro:" << endl;

  // agora user input String com o getline()
  cout << "Teste com o getline(), entre com uma string longa: " << endl;
  getline(cin, str_input_usr);
  cout << "Print, string longa recebida: " <<  str_input_usr << endl;

  cout << "->> string final " << str_teste_access << endl;

  return 0;
}
