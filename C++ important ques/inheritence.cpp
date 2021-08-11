#include <iostream>
using namespace std;

class A{
    public:
        void Afunc(){
            cout<<"I am void function of class A"<<endl;
        }
};
class C{
    public:
        void Cfunc(){
            cout<<"I am void function of class C"<<endl;
        }
};
class B : public A,public C{

};
int main(){
    B obj;
    obj.Afunc();
    obj.Cfunc();
}