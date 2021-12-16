#include <iostream>
#include <string>
using namespace std;
// our class 
class Complexe{
  public:
double A,B;
Complexe (double a=0, double b=0):A{a},B{b}{
}
// les operateurs arithmetique 

Complexe operator+(Complexe &v){ // l'addition
  Complexe tmp;
  tmp.A=A+v.A;
    tmp.B=B+v.B;
    return tmp;
    }
    Complexe operator-(Complexe &v){ // la soustraction
  Complexe tmp;
  tmp.A=A-v.A;
    tmp.B=B-v.B;
    return tmp;
    }
    Complexe operator*(Complexe &v){ // la multiplication
  Complexe tmp;
  tmp.A= A*v.A -B*v.B;
    tmp.B=A*v.B + B*v.A;
    return tmp;
    }
     Complexe operator/(Complexe &v){ // la divison 
  Complexe tmp;
   double norm = v.A*v.A + v.B*v.B;
  tmp.A=(A*v.A + B*v.B) / norm;
    tmp.B=(A*v.B + B*v.A) / norm;
    return tmp;
    }
    void display(){
      cout<<A<<"+"<<B<<"i"<<endl;
    }
};
int main(){
  Complexe obj1(10,12),obj2(13,15);
  Complexe obj3=obj1/obj2;
  obj3.display();
  return 0;
}
