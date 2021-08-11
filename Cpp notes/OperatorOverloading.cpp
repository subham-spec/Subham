#include <iostream>
using namespace std;

class OpOverload{
    private:
        int real, img;
    public:
        OpOverload(int real = 0, int img = 0){
            this->real = real;
            this->img = img;
        }
    OpOverload operator + (OpOverload &obj){
        OpOverload result;
            result.img = img + obj.img;
            result.real = real + obj.real;
        return result;
    } 
    void getData(){
        cout<<real<<" i"<<img<<endl;
    }
};
int main(){
    OpOverload c1(5, 3);
    OpOverload c2(3, 4);

    OpOverload c3 = c1 + c2;
    c3.getData();
    return 0;
}