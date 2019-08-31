
/*
 Dado una funcion cuadratica, donde los parametros a, b, y c son leidos por la consola.
 Calcular las soluciones basado en las siguientes reglas:

 Leer del usuario a, b, y c separados por espacio:
 cin>>a>>b>>c;

 1.- Si a y b son cero, entonces: No tiene solucion: a==0, b ==0..
 2.- Si a es cero, entonces: Tiene una sola solucion: (-c/b)
 3.- Si b^2 -4ac es negativo, entonces: No tiene solucion: delta < 0..
 4.- En el resto de los casos tiene dos soluciones y es calculado con la siguiente
 formula:

 x1 = -b + ((b^2 - 4ac)^(1/2))/2a
 x2 = -b - ((b^2 - 4ac)^(1/2))/2a

 La ecuacion tiene dos soluciones: x1 = x1, x2 = x2
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float a;
  float b;
  float c;

  std::cout <<"Ingrese tres numeros separados por un espacio:";
  cin>>a>>b>>c;

  if (a==0 && b==0)
  {
    std::cout<<"No tiene solucion";
  }
  else if (a==0)
  {
    cout<<(-c/b);
  }
  else if ((b*b)-(4*a*c)<0)
  {
    std::cout<<"No tiene solucion";
  }

  else
  {
    float discri=(b*b)-(4*a*c);
    float x1=((-1*b)+pow(discri,1/2)/(2*a));
    float x2=((-1*b)-pow(discri,1/2)/(2*a));
    std::cout<<"x1= "<<x1<<endl;
    std::cout<<"x2= "<<x2<<endl;

  }

    

}
