#include <iostream>                                                                           //Inicialização da biblioteca padrão para c++
#include <math.h>                                                                            //Inicialização da biblioteca matemática para c++ para acessar a função pow() (potenciação)
#include <iomanip>                                                                          //Inicializaçao da biblioteca iomanip para escrever números de ponto flutuante com determinadas casas decimais
using namespace std;

int main(){
    int n = 0;                                   //Declaraçao da primeira variável, que é o número de termos da somatória
    double leibniz = 0.0;                       //Declaração da variável conta
    double pi = 0.0;                           //Declaração da variável que armazenará o termo
    cin >> n;                                  //Input do número de termos
    double v[n];                                //Declaração do vetor para armazenar cada termo do Pi
    for(int i = 0; i<n; i++){                    //Loop que fará o cálculo termo a termo até que a condição seja satisfeita -> i < n
        leibniz = (pow(-1, i))/(2.0*i-1);         //Fórmula ->  (-1^n dividido por (2*i)-1)  -> VEZES 4(linha 14)
        pi += leibniz*4;                                                                  
        v[i] = pi;
        //if(i%40==0){
        //    cout << fixed << setprecision(20) << v[i] << ","<<endl;       //Print para organizar cada termo separado por vírgula para inserir todos em um array
        //}
        //else{
        //    cout << fixed << setprecision(20) << v[i] << ",";
        //}                                                                     
                                       
    }
    cout << fixed << setprecision(15) << pi << endl;                                   //Impressão do resultado de Pi para visualização separada do último termo
}