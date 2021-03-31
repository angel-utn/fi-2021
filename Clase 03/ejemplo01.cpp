/*
    Dados dos números calcular e informar el mayor de ellos.
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
    if (num1 > num2){
        cout << num1;
    }
    else{
        cout << num2;
    }

    return 0;
}
