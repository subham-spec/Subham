#include <iostream>
using namespace std;
void func(){
    cout<<"I am in other function and printing"<<endl;
    // cout<<p<<endl;
}
int main(){
    int no =10;
    int *p = new int();  /* basically this "new" is providing a address to this pointer so that it will
                        store in heap memory of the program and it can be easilly accessable in the program */
    *p = 10;
    func();

    delete (p); // it is deleting the object which is formed in heap memory.
    p = NULL;
    // reuse of Dangling pointer
    p = new int[5];
    delete []p; // deleting the block of the array 
    p = NULL; // dangling pointer pointing nothing

}