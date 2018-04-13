#include <iostream>

using namespace std;

int product(int A[][3], int B[][3], int C[][3],int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                C[i][j]=A[j][k]*B[k][j];
            }
        }
    }
    return C;
}

int main()
{
    int A[][]=new int{{2,3,4},{1,5,4}};
    int B[][]=new itn{{2,3,4},{1,5,4}};
    int C[][]={{0,0,0},{0,0,0}};
    int n=3;
    cout <<product(A,B,C,n)<< endl;
    return 0;
}
