#include <iostream>
using namespace std;

int main(){
    const int T=10;
    float num, pos[T]={}, neg[T]={};
    int i, cp=0, cn=0;
    for(i=0;i<T;i++){
        cout<<"INGRESE UN NUMERO: ";
        cin>>num;

        if (num > 0){
            pos[cp]=num;
            cp++;
        }
        else{
            if (num < 0){
                neg[cn]=num;
                cn++;
            }
        }

    }
    cout << "Vector de positivos: " << endl;
    for(i=0; i<cp; i++){
        cout << pos[i] << endl;
    }
    cout << endl;
	cout<< "Vector de negativos: " << endl;
    for(i=0; i<cn; i++){
        cout << neg[i] << endl;
    }
	return 0;
}
