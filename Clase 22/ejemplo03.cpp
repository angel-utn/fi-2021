#include <iostream>
using namespace std;

void poner_cero(float vec[], int tam){
    int i;
    for(i=0; i<tam; i++){
        vec[i] = 0;
    }
}
void mostrar_vector(float v[], int t){
    int i;
    for(i=0; i<t; i++){
        if(v[i] != 0){
            cout << v[i] << endl;
        }
    }
}
void cargar_datos(float positivos[], float negativos[], int tam){
    int i;
    float num;
    for(i=0;i<tam;i++){
        cout<<"INGRESE UN NUMERO: ";
        cin>>num;

        if (num > 0){
            positivos[i]=num;
        }
        else{
            if (num < 0){
                negativos[i]=num;
            }
        }
    }
}
float buscar_maximo(float vec[], int tam){
    float maximo = vec[0];
    int i;
    for(i=1; i<tam; i++){
        if (vec[i] > maximo){
            maximo = vec[i];
        }
    }
    return maximo;
}

int main(){
    const int T=10;
    float pos[T], neg[T];

    poner_cero(pos, T);
    poner_cero(neg, T);
    cargar_datos(pos, neg, T);
    cout << endl << "Vector de positivos: " << endl;
    mostrar_vector(pos, T);
    cout << endl << "Vector de negativos: " << endl;
    mostrar_vector(neg, T);

    float maximoPositivos;
    maximoPositivos = buscar_maximo(pos, T);
    cout << "El máximo de los positivos es: " << maximoPositivos << endl;

//    for(i=0; i<T; i++){
//        pos[i] = 0;
//    }
//    for(i=0; i<T; i++){
//        neg[i] = 0;
//    }
//
//    for(i=0;i<T;i++){
//        cout<<"INGRESE UN NUMERO: ";
//        cin>>num;
//
//        if (num > 0){
//            pos[cp]=num;
//            cp++;
//        }
//        else{
//            if (num < 0){
//                neg[cn]=num;
//                cn++;
//            }
//        }
//    }
//    cout << "Vector de positivos: " << endl;
//    for(i=0; i<cp; i++){
//        cout << pos[i] << endl;
//    }
//    cout << endl;
//	cout<< "Vector de negativos: " << endl;
//    for(i=0; i<cn; i++){
//        cout << neg[i] << endl;
//    }
	return 0;
}
