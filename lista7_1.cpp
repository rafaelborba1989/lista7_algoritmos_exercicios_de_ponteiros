/*1. Numa disciplina são dadas duas provas e dois trabalhos, mas a média é calculada
considerando-se apenas a maior nota de prova e a maior nota de trabalho. Elabore um
algoritmo que, dadas as quatro notas de um aluno, informe a sua média. Para isso,
utilize duas funções: uma que determine o maior valor entre as notas (de provas ou de
trabalhos) e outra que calcule a média aritmética das duas maiores notas.*/
#include <iostream>

using namespace std;

float* maioresNTs();  // indetificação de função 1
float media(float a, float b);  // identificação de função 2

int main() {  // Inicio executavel do algoritmo!
  float n1, n2;
  float *p;  // declaração de ponteiro

  p = maioresNTs();  // ponteiro recebe posicao do vetro da função 1 !

  n1 = *p;
  p++;
  n2 = *p;
  cout << "\nMedia do aluno: " << media(n1, n2); // retorna o resultado obtido na execução da função 2 !
}

float* maioresNTs(){   // FUNÇÃO 1
 int i, maiort = 0, maiorp = 0;  // variaveis conhecidas apenas dentro da função 1 !  
  float  v[4];  
  static float v2[2];
 for(i = 0; i < 4; i++){
    if(i<2){
       cout<<"\nDigite a nota do trabalho " << (i+1) << " :";
       cin >> v[i]; 
       if(v[i]>maiort){
         maiort = v[i];
       }
    }else{
       cout<<"\nDigite a nota da prova " << (i-1) << " :";
       cin >> v[i];
       if(v[i]>maiorp){
         maiorp = v[i];
       } 
    }
 }
 v2[0] = maiort;
 v2[1] = maiorp;
 return v2;  
}

float media(float a, float b){   // FUNÇÃO 2
  float m;     //variavel conhecida apenas dentro da função 2 !
  a = ((a)+(b))/2;
  return a;
}
