#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int mediana(vector<int> &lista);
vector<int> leerConsola();

vector<int> leerConsola() {
    vector<int> lista;
    int num;
    while (true){
        cout<<"Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros: ";
        cin>>num;
        if (num==-1) {
            break;
        }
        lista.push_back(num);
    }
    return lista;
    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
}

int mediana(vector<int> &lista) {
    int med;
    int i;
    int num;
    int j=lista.size();
    for (i=0; i<lista.size(); i++) {
        if (j%2==0){
            med = (lista[(j/2)] + lista[(j/2)-1])/2;
        }
        else {
            med = lista[j/2];
        }
    }
    /*
    Si el vector es 3, 9, 11, 15
    Si el número de observaciones es par,
     la mediana corresponde al promedio de los dos valores centrales.
     Por ejemplo, en la muestra 3, 9, 11, 15, la mediana es (9+11)/2=10.
     (v[4/2 -1] + v[4/2])/2 = (v[1] + v[2])/2 = (9+11)/2

    Si el vector es 3, 9, 11, 15, 16
    Si el numero de observaciones es impar,
     Por ejemplo, en la muestra 3, 9, 11, 15, 16, la mediana es 11
     v[4/2] = v[2] = 11
     */
    return med;
}

int main() {
  int num;
    cout<<"Calcular la mediana de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    int mediana_elemento = mediana(leer_usuario);
    cout<<"La mediana es: "<<mediana_elemento<<"\n";
}
