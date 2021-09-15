///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
/*Hacer un programa para cargar un vector de enteros de 5 elementos,
y luego mostrarlo completo,
e informar el máximo
y
el mínimo valor

contenido en el vector
*/

///Informar la diferencia entre el máximo y el mínimo valor

void cargarVector(int v1[], int cant){
    int i;
    for(i=0;i<cant;i++){
        cout<<"INGRESE UN NUMERO: ";
        cin>>v1[i];
    }
}

void mostrarVector(int v1[], int cant){
    int i;
    for(i=0;i<cant;i++){
        cout<<v1[i]<<endl;
    }
}

int calcularMaximo(int v1[], int cant){
    int i, maximo=v1[0];
    for(i=1;i<cant;i++){
        if(v1[i]>maximo){
            maximo=v1[i];
        }
    }
    return maximo;
}

int calcularMinimo(int v1[], int cant){
    int i, minimo=v1[0];
    for(i=1;i<cant;i++){
        if(v1[i]<minimo){
            minimo=v1[i];
        }
    }
    return minimo;
}





int main(){
    const int TAM=10;
    int v[TAM], maxi, mini;
    cargarVector(v,TAM);
    mostrarVector(v,TAM);
    maxi=calcularMaximo(v,TAM);
    mini=calcularMinimo(v,TAM);
//	cout<<"MAXIMO: "<<maxi<<endl;
//	cout<<"MINIMO: "<<mini<<endl;
    cout<<"DIFERENCIA ENTRE EL MAXIMO Y EL MINIMO: "<<maxi-mini<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
