 
#include <iostream>
#include <stdexcept>
#include <math.h>
#include <string>
 
using std::cout;
using std::cin;
using std::invalid_argument;
using std::string;
 

 
 
int main() {
 

 
 
   cout<<"***************************************************\n";
 
   cout<<"                     MENU                          \n";
 
   cout<<"***************************************************\n";
 
   cout<<"  1.- Add\n";
 
   cout<<"  2.- Resta\n";
 
   cout<<"  3.- Multiplicar\n";
 
   cout<<"  4.- Dividir\n";
 
   cout<<"  6.- Modulo\n";
 

 
 

 
 
 int ingreso,numero1,numero2,z,suma,multiplicacion,resta,division,modulo,raiz,ayuda;
 
 do{
 
 cout<<"Ingrese la opción: ";
 
 cin>>ingreso;
 
 cout<<"Ingrese los dos números: ";
 
 cin>>numero1>>numero2;
 
 const std::string ayuda("y");
 
 } while (z==ayuda);
 
 
 
if (ingreso==1){
 
 suma=numero1+numero2;
 
cout<<"Resultado: "<<suma;
 
cout<<"\n";
 
}
 
else if(ingreso==2){
 
  resta=numero1-numero2;
 
  cout<<"Resultado: "<<resta;
 
  cout<<"\n";
 
}
 
else if(ingreso==3){
 
  multiplicacion=numero1*numero2;
 
  cout<<"Resultado: "<<multiplicacion;
 
  cout<<"\n";
 
}
 
else if(ingreso==4){
 
   division=numero1/numero2;
 
  cout<<"Resultado: "<<division;
 
  cout<<"\n";
 
}
 
else if(ingreso==5){
 
  raiz=pow(numero1,2)+ pow(numero2,2);
 
 modulo=sqrt(raiz);
 
  cout<<"Resultado: "<<modulo;
 
  cout<<"\n";
 
}
 
cout<<"Continuar?";
 
cin>>z;
 

 
 

 
 
   return 0;
 
}

