/*
This program relates to that how to chacke the maximum number of character.
e.g.,
Input:- subhamsharma
output:- A is the maximum repeation character 3 times...
*/
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    //method 1:-
    cout<<"Enter the string"<<endl;
    string str;
    cin>>str;
    int size=str.size();
    int arr[26];
    for(int i=0; i<26; i++){
        arr[i]=0;
    }
    for(int i=0; i<size; i++){
        arr[str[i]-'a']++;
    }
    int m=0;
    char ch;
    for(int i=0; i<26; i++){
        if(arr[i]>m){
            m=max(arr[i],m);
            ch=i+'a';
        }
    }
    cout<<"Maximum repeation is of "<<ch<<" with "<<m<<" times"<<endl;
    /*
    method 2:-
    cout<<"Enter the string"<<endl;
    string str;
    cin>>str;
    int size=str.size();
    sort(str.begin(),str.end());
    int m=1 , j=1;
    char ch;
    for(int i=1; i<size; i++){
        if (str[i]==str[i-1]){
            j++;
        }
        if(j>m){
            ch=str[i];
            m=max(j,m);
        }
        j=1;
    }
    cout<<"Maximum repeation is of "<<ch<<" with "<<m<<" times"<<endl;
    */
}
