/*
This program relates to that user gives any string and we have to convert it into completely 
upper or in completely lower string:-
e.g.,
1. SuBhAm
output is in completely
    UPPER:- SUBHAM
    lower:- subham
*/
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    cout<<"Enter any string value"<<endl;
    string str;
    getline(cin,str);//to take input a sentence
    //cin>>str;

    int a;
    cout<<"Enter 1 for upper and 2 for lower";
    cin>>a;
    switch (a){
        case 1:
            transform(str.begin(),str.end(), str.begin(), :: toupper);
            //inbuilt function to form a string into upper format
            break;
        
        case 2:
            transform(str.begin(),str.end(), str.begin(), :: tolower);
            //inbuilt function to form a string into upper format
            break;
        
        default:
            cout<<"Enter the correct input";
    }
    
    cout<<str;

}   