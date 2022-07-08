/*2. Faça uma função que recebe um número inteiro por parâmetro e retorna 
verdadeiro se ele for par e falso se for ímpar.*/#include <iostream>

using namespace std;

int tipo(int* x);

int main() {

  int num;
  
  cout << "\nDigite um número: ";
  cin >> num;

  cout << tipo(&num);
}

int tipo(int* x){
  bool tipe;
  if(*x % 2 == 0){
    tipe = true;
  }else{
    tipe = false;
  }
  return tipe;
}
