/*
Problem:
Check if there exists two elements in an array such that their sum is equal to given
K.
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter the value of the array\n";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Enter the sum value : ";
	int s,sum;
	cin>>s;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			sum=arr[i]+arr[j];
			if(sum==s){
				cout<<i+1<<" and "<<j+1<<" makes this sum"<<endl;
				return 0;
			}
		}
	}
	cout<<"Not possible";
	return 0;
}
