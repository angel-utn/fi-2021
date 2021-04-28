/*
 Dada una lista de 5 números enteros positivos. Calcular e informar el
 máximo valor.
*/

#include <iostream>
using namespace std;

int main(){
    int i, n, maximo=0;

    for(i=1; i<=5; i++){
        cout << "Ingresar número: ";
        cin >> n;

        if (n > maximo){
            maximo = n;
        }

    }

    cout << "El valor máximo es: " << maximo << endl;
    return 0;
}
