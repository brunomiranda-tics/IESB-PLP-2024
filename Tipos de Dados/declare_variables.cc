/*
*
Instituição: IESB
Disciplina:  Paradigmas de Linguagens de Programação (PLP)
Objetivo:    Fornecer conhecimentos e práticas de paradigmas de programação.
Professor:   Bruno Miranda [bruno.marcos@iesb.edu.br]
Data:        Mar2024

# Prática: Tipos de Dados

# Exemplo: Uso de declaração de variáveis em C++
*
*/

#include <iostream>
#include <string>

using namespace std;


int main() {

  // variaveis
  int my_num = 42;
  double my_float_num = 41.99;
  char my_letter = 'A';
  string my_string = "IESB!";
  bool my_bolean = true;

  cout << "Eu faço niver em " << my_num << " do mês tal." << endl;

  // criando variaveis ao mesmo tempo
  int x = 2, y = 4, z = 6;
  cout << "Soma de uma declaração muito louca: " << x + y + z << endl;

  // criando constantes
  const string kMensagemSucesso = "Mensagem de sucesso!";
  cout << kMensagemSucesso << endl;

  // characters
  char a = 65, b = 66, c = 67;
  cout << a;
  cout << b;
  cout << c << endl;

  // usando string
  string meu_obj_string = "meu obj string";
  cout << meu_obj_string << endl;


  return 0;
}
