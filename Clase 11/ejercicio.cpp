/**
Dada una lista de números que finaliza cuando se ingresa un número divisible por 7
, informar cual es el primer y segundo par ingresado. Y anteúltimo y último
número impar ingresado.

Ejemplo:
8, 4, -5, 6, 10, 5, 18, 14 se informa:

Primer par: 8
Segundo par: 4

Anteúltimo impar: -5
Último impar: 5

Nota: Contemplar la posibilidad que podría no haber números impares o pares en
la lista.
*/
#include <iostream>
using namespace std;

int main(){
    int n, resto;
    int pp, sp, cp = 0;
    int ui=0, aui=0;

    cout << "Número: ";
    cin >> n;
    while (n%7 != 0){

        if (n%2 == 0){
            cp++;
            if (cp == 1){
                pp = n;
            }
            if (cp == 2){
                sp = n;
            }
        }
        else{
            aui = ui;
            ui = n;
        }

        cout << "Número: ";
        cin >> n;
    }
    cout << endl;
    if (cp >= 2){
        cout << "Primer par: " << pp << endl;
        cout << "Segundo par: " << sp << endl;
    }
    else{
        if (cp >= 1){
            cout << "Primer par: " << pp << endl;
        }
        else{
            cout << "No hubo pares" << endl;
        }
    }
    cout << endl;
    if (ui == 0 && aui == 0){
        cout << "No hubo impares";
    }
    else{
        if (ui != 0){
            cout << "Último impar: " << ui << endl;
        }
        if (aui != 0){
            cout << "Anteúltimo impar: " << aui << endl;
        }
    }





    return 0;
}
