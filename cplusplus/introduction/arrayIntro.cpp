#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int charToInt(char c) {
    return c - '0';
}

int *readIntoArray(int size)
{
    int *arr = new int[size];
    string line;
    getline(cin, line);
    int j = 0;
    for(int i = 0; i < line.size(); i++)
    {
        if (isdigit(line[i]))
        {
            if(charToInt(line[i]) < 1 || charToInt(line[i]) > 10000)
            {
                return 1;
            }
            arr[j] = charToInt(line[i]);
            j++;
        }
    } 
    return arr;   
}

void printArrayBackwards(int *arr, int size)
{
    for (int i = size-1; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int arraySize;
    cin>>arraySize;
    if(arraySize < 1 || arraySize > 1000)
    {
        return 1;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int* arr = readIntoArray(arraySize);
    printArrayBackwards(arr, arraySize);
    return 0;
}
