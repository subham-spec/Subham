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
    cout<<"Enter the dimention of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the values of the array\n";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
	int sum,ans=MIN_INT;
    cout<<"Possible subarrays are : \n";
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
			sum=0;
            for(int k=i; k<=j; k++){
                cout<<a[k]<<" ";
				sum += a[k];
            }
			ans=max(sum,ans);
            cout<<endl;
        }
    }
	cout<<"Maximum sum is "<<ans<<endl;
    return 0;
}

