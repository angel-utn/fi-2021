/*
 Dada una lista de 10 números enteros positivos, negativos o cero. Calcular e
 informar el máximo valor y el mínimo valor.
*/

#include <iostream>
using namespace std;

int main(){
    int i, n, maximo, minimo;

    for(i=1; i<=5; i++){
        cout << "Ingresar número: ";
        cin >> n;

        if (i==1){
            maximo = n;
            minimo = n;
        }
        else{
            if (n > maximo){
                maximo = n;
            }
            if (n < minimo){
                minimo = n;
            }
        }
    }
    cout << endl;
    cout << "Máximo: " << maximo << endl;
    cout << "Mínimo: " << minimo << endl;


    return 0;
}
