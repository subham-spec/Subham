/*
BIT MANUPULATION
To find the bit of a number at the position
Example:
10110101 at 5=?

Answer:
1
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int no;
    cout<<"Enter the number : ";
    cin>>no;
    
    cout<<"Enter the position to find the bit : ";
    int n;
    cin>>n;

    int no2=pow(2,n);
    int i=no&no2;
    if(i){
        cout<<"At "<<n<<" place there is 1"<<endl;
    }
    else{
        cout<<"At "<<n<<" place there is 0"<<endl;
    }
    
    return 0;
}

