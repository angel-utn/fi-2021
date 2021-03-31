/*
    Dados dos números calcular e informar cuál es ellos es el
    más grande (primero o segundo).
*/
#include <iostream>
using namespace std;

int main(){
    float num1, num2;
    cout << "Ingresar un número: ";
    cin >> num1;
    cout << "Ingresar otro número: ";
    cin >> num2;
    cout << endl << endl;

    if (num1 == num2){
        cout << "Son iguales";
    }
    else{
        if (num1 > num2){
        cout << "El primero es mayor";
        }
        else{
            cout << "El segundo es mayor";
        }

    }
    return 0;
}
