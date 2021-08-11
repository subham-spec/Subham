/*
If arra is sorted already....
Problem:
Check if there exists two elements in an array such that their sum is equal to given
K.
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the dimention of the array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the values of the array : \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int s,sum;
    cout<<"enter the sum : ";
    cin>>s;
    int i=0,j=n-1;

    while(i!=j){
        sum=arr[i]+arr[j];
        if(sum>s){
            j--;
        }
        else if(sum<s){
            i++;
        }
        else
        {
            cout<<"Sum is possible at "<<i+1<<" and "<<j+1<<endl;
            return 0;
        }
    }
    cout<<"Sum not possible"<<endl;
}