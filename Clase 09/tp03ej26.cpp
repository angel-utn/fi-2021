/**
26)Hacer un programa para que se determinen e informen cuales son los números
perfectos que hay entre el 2 y el 200.
Atención: El usuario no ingresará NADA, el programa busca e informa los
números que cumplan esa condición en forma automática.

*/
#include <iostream>
using namespace std;

int main(){
    int nro, i, sumadiv, resto;

    for(nro=2; nro<=100000; nro++){
        sumadiv = 0;
        for(i=1; i<(nro/2)+1; i++){
            resto = nro % i;
            if (resto == 0){
                sumadiv = sumadiv + i;
            }
        }

        if (sumadiv == nro){
            cout << nro << endl;
        }
    }

    return 0;
}
