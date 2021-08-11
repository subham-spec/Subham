/*
Problem:
Airthmatic subarray is an continious part of an array of max length have same diff with respect to other 
differences
*/
#include <iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter the length of the array : ";
    cin>>len;
    int arr[len];
    
    cout<<"Now enter the elements of the array one by one : "<<endl;
    for(int i=0 ; i<len ; i++){
        cin>>arr[i];
    }
    int ans=2;
    int diff=arr[1]-arr[0];
    int j=2;
    int curr=2;
    while(j<len){
        if(arr[j]-arr[j-1] == diff){
            curr++;
        }
        else{
            diff=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<< ans<< endl;
    return 0;

}