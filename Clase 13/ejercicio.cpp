/**
Hacer el ejercicio 15, considerando que el experimento se realizó en 10 ciudades,
 y que por cada una de ellas hay un listado de temperaturas que finaliza con un
  valor negativo.

TP 4
15)Como resultado de un experimento se obtuvieron valores de temperatura
positivos. Al finalizar los datos se coloca un valor negativo.

Se pide informar:
a) El mayor valor ingresado y cual fue su número de orden durante el ingreso.

*/
#include <iostream>
using namespace std;

int main(){
    const int CIUDADES=3;
    int c=0, i;
    float temp;
    float max_temp = 0;
    int max_numero;

    for(i=1; i<=CIUDADES; i++){
        max_temp = 0;
        c = 0;
        cout << "Temperatura: ";
        cin >> temp;
        while (temp >= 0){
            c++;
            if (temp > max_temp){
                max_temp = temp;
                max_numero = c;
            }
            cout << "Temperatura: ";
            cin >> temp;
        }
        cout << endl;
        cout << "Ciudad #" << i << endl;
        cout << "Temperatura máxima: " << max_temp << endl;
        cout << "Número de orden   : " << max_numero << endl << endl;
    }
    return 0;
}
