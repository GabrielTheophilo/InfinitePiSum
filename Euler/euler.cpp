#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double pi = 0.0; 
    int n = 0; // número de termos
    cin >> n;  // input - termos 
    for(int i = 1; i<=n; ++i){
        pi += 1.0/(i*i);  // 1.0 dividido por > i = número de termos vezes ele mesmo(quadrado)
        if(i%20==0){
            cout << fixed << setprecision(20) << sqrt(pi*6.0) << "," << endl;  //impressão em formato de vírgula para virar um array
        }
        else{
            cout << fixed << setprecision(20) << sqrt(pi*6.0) << ","; // impressão em formato de vírgula para virar um array
        }
    }
    pi *= 6.0;  // pi ao quadrado dividido por 6 na fórmula vira raiz quadrada de (pi*6)
    pi = sqrt(pi); 
    cout << fixed << setprecision(15) << pi << endl;

}