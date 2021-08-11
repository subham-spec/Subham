#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout<<"Enter the number upto which you have to find out the odd numbers : ";
    int no;
    cin>>no;
    
    int arr[100] = {0};
    for(int i=2; i<=no; i++){
        if(arr[i] == 0){
            for(int j=i*i; j<=no; j+=i){
                arr[j] = 1;
            }
        }
    }
    for(int i=2; i<=no; i++){
        if(arr[i] == 0)
            cout<<i<<" ";
    }
    cout<<endl;
}