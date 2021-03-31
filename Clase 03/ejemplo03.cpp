/*
    Dados tres números distintos entre sí. Calcular e informar el
    valor mayor.
*/
#include <iostream>
using namespace std;

int main(){
    float num1, num2, num3;

    cout << "Ingresar tres números: " << endl;
    cin >> num1 >> num2 >> num3;
    cout << endl << endl;
    /// && And (Y Lógico)
    ///     A       &&  B
    ///  verdadero  && verdadero --> verdadero
    ///  falso      && verdadero --> falso
    ///  verdadero  && falso     --> falso
    ///  falso      && falso     --> falso

    if (num1 > num2 && num1 > num3){
        cout << num1;
    }
    else{
        if (num2 > num3){
            cout << num2;
        }
        else{
            cout << num3;
        }
    }


    return 0;
}
