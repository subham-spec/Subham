#include <iostream>
#include <string>
using namespace std;
void resizeDemo(string str) 
{ 
   
    // Resizes str to a string with 
    // 5 initial characters only  
    str.resize(5); 
    cout << "Using resize : "; 
    cout << str; 
} 
/*
    add code for struct here.
*/
struct Student{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    Student st;
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}
