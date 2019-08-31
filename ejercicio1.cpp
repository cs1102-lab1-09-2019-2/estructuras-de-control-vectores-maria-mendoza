
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

float calcularPromedio(vector<int> &v);
vector<int> leerConsola();

vector<int> leerConsola() {
    vector<int> lista;
    int num;
    while (true){
        cout<<"Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros: ";
        cin>>num;
        if (num<0) {
            break;
        }
        lista.push_back(num);
    }
    return lista;
    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
}

float calcularPromedio(vector<int> &v) {

    int suma=0;
    for (int i=0; i<v.size(); i++) {
        suma += v[i];
    }

    /*
    El promedio es la suma de todos los elementos dividido entre el total de elementos
     */
    return suma/v.size();
}

int main() {

    cout<<"Calcular el promedio de los ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    float promedio_elemento = calcularPromedio(leer_usuario);
    cout<<"El promedio es: "<<fixed<<setprecision(2)<<promedio_elemento<<"\n";

    return 0;
}