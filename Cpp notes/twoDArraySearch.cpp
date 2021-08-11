/*
- 2D matrix Search
Problem
Given a nxm matrix.
Write an algorithm to find that the given value exists in the matrix or not.
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
Constraints
1 <= N,M <= 1,000
Sample Test Case:
Consider the following matrix:
[
 [1, 4, 7, 11, 15],
 [2, 5, 8, 12, 19],
 [3, 6, 9, 16, 22],
 [10, 13, 14, 17, 24],
 [18, 21, 23, 26, 30]
]
Given target = 5, return true.
Given target = 20, return false.
*/
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the dimention of the matrix : ";
    int r,c;
    cin>>r>>c;
    int m[r][c];
    cout<<"Enter the values of the matrix : ";
    for(int i=0 ; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>m[i][j];
        }
    }
    cout<<"Enter the Number to search : ";
    int search;
    cin>>search;
    int i=0,j=c-1;
    while(i<r && j<c){
        int k=m[i][j];
        if(search>k)
            i++;
        else if(search<k)
            j--;
        else{
            cout<<"Element found at "<<i+1<<" and "<<j+1<<endl;
            return 0;
        }
    }
    cout<<"Element not found"<<endl;
    return 0;
}