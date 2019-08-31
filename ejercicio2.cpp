
 
 
#include <iostream>
#include <vector>
#include <unordered_map>
 
using namespace std;
 
float moda(vector<int> &lista);
vector<int> leerConsole();
 
vector<int> leerConsole() {
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
 
float moda(vector<int> &lista) {
   unordered_map<int, int> map;
   for (int i=0; i <lista.size(); i++) {
       map[lista[i]]++;
   }
   int moda, max=0;
   for (auto &it:map) {
       if (it.second>max) {
           max = it.second;
           moda = it.first;
       }
   }
 
   /*
   La moda es el elemento que mas se repite en la lista de elementos
    */
   return moda;
}
 
 
int main() {
   cout<<"Calcular la moda de los numeros ingresados:\n\n";
   vector<int> leer_usuario = leerConsole();
   int moda_elemento = moda(leer_usuario);
   cout<<"La moda es: "<<moda_elemento<<"\n";
   return 0;
}
