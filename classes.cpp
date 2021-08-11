#include <iostream>
using namespace std;
class Student{
    private:
        string name;
        int age;
        char gen;
    public:
        Student(){
            cout<<"Default Constructor called"<<endl;
        } //default constructor.
        void setData(string name, int age, char gen){
            this->name = name;
            this->age = age;
            this->gen = gen;
        }
        void getData(){
            cout<<name<<endl;
            cout<<age<<endl;
            cout<<gen<<endl;
        }
};
int main(){
    int no;
    cout<<"Enter the number of objects : ";
    cin>>no;

    Student arr[no]; //object arr has been created to store the data.
    int age; string name; char gen;
    for(int i=0; i<no; i++){
        cout<<"Name: ";
        cin>>name;
        cout<<"Age: ";
        cin>>age;
        cout<<"gen: ";
        cin>>gen;
        arr[i].setData(name, age, gen);
    }
    for(int i=0; i<=no; i++){
        arr[i].getData();
    }
}