/*
In this program we have to ordered a math string into ascending or in descending
e.g.,
input math string is 84294
and
output math string is 98442
*/
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the numeric string "<<endl;
    string num;
    cin>>num;
    int a=num.size();
    
    int arr[a-1];
    for(int i=0; i<a; i++){
        int j=num[i]-48;
        arr[i]=j;
    }
    for(int i=0; i<a-1; i++){
        for(int j=i+1; j<a; j++){
            if (arr[j]>arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
    }
    for(int i=0 ;i<a ; i++){
        cout<<arr[i];
    }
}