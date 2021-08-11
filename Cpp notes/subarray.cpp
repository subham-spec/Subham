/*
In this program user gives an array and we have to print all the possible subsets of that one
e.g.,:-
Input array is
    {a,b,c}

Output subsets is
    {},{a},{b},{c},{a,b},{a,c},{b,c},{a,b,c}
*/
#include <iostream>
using namespace std;

void subsets(int arr[], int n){
    for(int i=0; i< (1<<n); i++){
        for(int j=0; j<n; j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    subsets(arr,4);
}

