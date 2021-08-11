/*
Problem:
We have to print all the possible subarrays of an array

Example:
a[]={1,2,3,4,5}

Solution: Possible subarrays are 
1
1 2
1 2 3
1 2 3 4
2
2 3
2 3 4
3 
3 4
4
and the maximum sum is 10;
*/
#include <iostream>
#include <climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int maxsum=INT_MIN;
	int sum=0;
	for(int i=0; i<n; i++){
		sum=sum+arr[i];
		if(sum<0){
			sum=0;
		}
		maxsum=max(sum,maxsum);
	}
	cout<<maxsum;
}
	
	
	
	
	
	
	
	
	
	
	
	
	