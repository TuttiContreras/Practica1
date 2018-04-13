#include <iostream>

using namespace std;

int suma (int A[], int n){
    if (n==0)
        return 0;
    else
        return A[n-1]+suma(A,n-1);
}

int main()
{
    int A[]={1,2,3,4,5}, n=5;
    cout <<suma(A,n);
    return 0;
}
