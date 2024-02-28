#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printArrayBackwards(int *arr, int size)
{
    for (int i = size-1; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    printArrayBackwards(A, n);

    return 0;
}