/*3. Escreva uma função que recebe 2 números inteiros n1 e n2 como entrada e retorna 
a soma de todos os números inteiros contidos no intervalo [n1,n2]. Use esta função 
em um programa que lê n1 e n2 do usuário e imprime a soma.*/
#include <iostream>

using namespace std;

int soma(int* a, int* b);  // indentificação da função!

int main() {

  int n1, n2, resultado;   // declaração de variavei do main

  cout << "\nDigite dois números inteiros: ";
  cin >> n1 >> n2;

  resultado = soma(&n1, &n2);  // variavel "resultado" recebendo o retorno da função
  cout << resultado;  // exibindo resultado
}

int soma(int* a, int* b){    // criação da função recebedora e retornadora !
  int i, soma = 0;     // variaveis conhecidas apenas dentro da função!
  for(i = *a; i <= *b; i++){
    soma = soma + (i);
  }
  return soma;  // retorno da função !
} 
