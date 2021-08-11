/*
Problem:
Given an unsorted array A of size N of non-negative integers, find a continious subarray which adds to a 
given number S.

Constraints:
1<=N<=10^5
0<=Ai<=10^10

Example:
N=5,S=12
A[]={1,2,3,7,5}

Output: 2,4
Explaination: The sum of elements from 2nd position to 4th positon is 12.

*/
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array : ";
    int n;
    cin>>n;
    cout<<"Enter the elemets of the array one by one-"<<endl;
    int a[n];
    for(int i=0 ; i<n; i++){
        cin>>a[i];
    }
    cout<<"Enter the sum of the digits : ";
    int s;
    cin>>s;
    int sum;
    for(int i=0; i<n; i++){
        sum=0;
        for(int j=i; j<n; j++){
            sum +=a[j];
            if(sum==s){
                cout<<"The sum is from "<<i+1<<" to "<<j+1<<endl;
                return 0;
            }
            else if(sum>s){
                break;
            }
        }
    }
    cout<<"Sum not found, we are sorry"<<endl;
    return 0;
}