/*
Challenge 2 - Matrix Multiplication
Problem
Given two 2-Dimensional arrays of sizes n1Xn2 and n2Xn3. Your task is to
multiply these matrices and output the multiplied matrix.
Constraints
1 <= n1,n2,n3 <= 1,000
Approach
1. Make a nested loop of order 3. In the outer loop iterate over rows of
the first matrix and in the inner loop iterate over columns of the
second matrix.
2. Multiply rows of the first matrix with columns of the second matrix in
the innermost loop and update in the answer matrix.
*/
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the dimention of the matrix : ";
    int r,c;
    cin>>r>>c;
    int m[r][c],n[r][c];
    cout<<"Enter the values of the first matrix \n";
    for(int i=0 ; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>m[i][j];
        }
    }
    cout<<"Enter the values of the second matrix \n";
    for(int i=0 ; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>n[i][j];
        }
    }
    int result,ans;
    for(int k=0; k<r; k++){
        for(int i=0; i<r; i++){
            result=0;
            for(int j=0; j<c; j++){
                ans=m[k][j] * n[j][i];
                result += ans;
            }
            cout<<result<<"  ";
        }
        cout<<endl;
    }
}