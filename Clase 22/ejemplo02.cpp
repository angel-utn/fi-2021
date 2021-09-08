#include <iostream>
using namespace std;

int main(){
    const int T=10;
    float num, pos[T]={}, neg[T]={};
    int i;
    for(i=0;i<T;i++){
        cout<<"INGRESE UN NUMERO: ";
        cin>>num;

        if (num > 0){
            pos[i]=num;
        }
        else{
            if (num < 0){
                neg[i]=num;
            }
        }
    }
    cout << "Vector de positivos: " << endl;
    for(i=0; i<T; i++){
        if(pos[i] != 0){
            cout << pos[i] << endl;
        }
    }
    cout << endl;
	cout<< "Vector de negativos: " << endl;
    for(i=0; i<T; i++){
        if (neg[i] != 0){
            cout << neg[i] << endl;
        }
    }
	return 0;
}
