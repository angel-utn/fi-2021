#include <iostream>
using namespace std;

int main(){
    int n, c = 0;

    cout << "Ingrese nota: ";
    cin >> n;
    while(n >= 0){
        c++;

        cout << "Ingrese nota: ";
        cin >> n;
    }
    cout << endl << "Se ingresaron " << c << " exámenes." << endl;


    return 0;
}
