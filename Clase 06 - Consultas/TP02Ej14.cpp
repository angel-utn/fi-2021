#include <iostream>
using namespace std;

int main(){
    int n, maximo;

    cout << "Ingresar nro: ";
    cin >> maximo;

    cout << "Ingresar nro: ";
    cin >> n;

    if (n > maximo){
        maximo = n;
    }

    cout << "Ingresar nro: ";
    cin >> n;

    if (n > maximo){
        maximo = n;
    }

    cout << "Ingresar nro: ";
    cin >> n;

    if (n > maximo){
        maximo = n;
    }

    cout << "Ingresar nro: ";
    cin >> n;

    if (n > maximo){
        maximo = n;
    }

    cout << endl << endl;
    cout << "Maximo: " << maximo;

    return 0;
}
