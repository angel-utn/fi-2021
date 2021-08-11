/**
  Dadas las edades de los 30 alumnos de un curso. Calcular e informar
  cuántos de ellos tienen una edad mayor a la edad promedio.
*/
#include <iostream>
using namespace std;

int main(){
  int i, edades[10], suma=0, cant=0;
  float promedio;

  /// edades[índice] = valor entero; (porque edades es un vector de enteros);
  /// índice siempre debe ser un valor entero entre 0 y Tamaño-1

  for(i=0; i<10; i++){
    cout << "Ingresar edad: ";
    cin >> edades[i];
    suma = suma + edades[i];
  }
  promedio = suma / 10.0;
  cout << endl << endl << "El promedio es:  " << promedio << endl;
  cout << endl << "La cantidad de edades mayores al promedio: ";

  for(i=0; i<10; i++){
    if (edades[i] > promedio){
      cant++;
    }
  }
  cout << cant;
  return 0;
}
