#include <iostream>
#include <string>

 
int main() {
 int x,y,z;
 using namespace std;
 std::cout <<"Ingrese tres numeros separados por un espacio: ";
 
 cin>>x>>y>>z;
 if (x>y&&x>z){
   cout<<"El mayor valor: "<<x<<endl;
 }
 else if(y>x&&y>z){
   cout<<"El mayor valor: "<<y<<endl;
 }
 else{
   cout<<"El mayor valor: "<<z<<endl;
 }
 return 0;
}
