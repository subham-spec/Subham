/*
Problem:
You haave to take input the dimention of the matrix and also take input of the real matrix
Then you have to print all the sub spiral possible matrix of the real one..

Example:
1  2  3  4  5
6  7  8  9  10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

Output:

1 2 3 4 5 10 15 20 25 24 23 22 21 16 11 6 7 8 9 14 19 18 17 12 13 
*/
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the dimention of the 2D matrix : ";
    int r,c;
    cin>>r>>c;
    
    cout<<"Enter the values of the matrix \n";
    int m[r][c];

    for(int i=0; i<r; i++){
        for(int j=0 ; j<c; j++){
            cin>>m[i][j];
        }
    }

    //cs--column start
    //ce--column end
    //rs--row start
    //re--roe end
    cout<<"All possible spiral matrix are \n";
    int cs=0,ce=c-1;
    int rs=0,re=r-1;

    while(rs<=re && cs<=ce){
        //for starting row
        for (int col = cs; col <= ce; col++){
            cout<<m[cs][col]<<" ";
        }
        rs++;
        //for column end
        for(int row=rs; row<=re; row++){
            cout<<m[row][ce]<<" ";
        }
        ce--;
        //for last row
        for (int col=ce; col>=cs; col--)
        {
            cout<<m[re][col]<<" ";
        }
        re--;
        //for first column
        for(int row=re; row>=rs; row--){
            cout<<m[row][cs]<<" ";
        }
        cs++;
        
    }

    return 0;
}