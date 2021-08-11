/*
Problem:
You are given an arr[] of N integers including 0.The task is to find the smallest positive number missing from 
that array.

Constraints:
1<=N<=10^6
-10^6<=Ai<=10^6

Example:
a[]={0,-9,1,3,-4,5}

Answer: The minimum positive number is 2.
*/
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the range of the array : ";
    int n;
    cin>>n;
    int a[n],b[n];
    cout<<"Enter the value one by one\n";
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i]=0;
    }
    int j;
    for(int i=0; i<n; i++){
        j=a[i];
        if(j>=0){
            b[j]=1;
        }
    }
    for(int i=0; i<n; i++){
        if(b[i]==0){
            cout<<i<<" is the smallest positive missing number";
            return 0;
        }
    }
    cout<<"Oops, Number not found"<<endl;
    return 0;
}