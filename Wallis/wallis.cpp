#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    int n = 0;
    double wallis = 0.0;            //Termo que armazenará os cálculos
    double primeiro = 0.0;          // Dois passos da conta separados para facilitar a conta
    double segundo = 0.0;           //
    double pi = 2.0;                // fator inicial do produto
    cin >> n;
    double v[n];
    for(int i = 1;i<n;i++){                                             //N = Numero do termo
        primeiro = (double)(2*i)/((2*i)-1);         // Primeiro fator (2* N) / ((2 * N) - 1)
        segundo =  (double)(2*i)/((2*i)+1);         // Segundo fator (2 * N) / ((2 * N) + 1)
        wallis = (primeiro*segundo);                // Multiplicação de um pelo outro
        pi = pi * wallis;                           // Multiplicação do primeiro termo do produto (2) armazenado na variável "pi" vezes o resultado dos fatores 
        v[i] = pi;                                  // Armazenamento no vetor de posição i
        //if(i%40==0){
        //cout <<fixed<<setprecision(20)<< v[i] << ","<<endl;
        //}
        //else{
        //    cout <<fixed<<setprecision(20)<< v[i] << ",";
        //}
    }
    cout << fixed << setprecision(15) << pi << endl;
}