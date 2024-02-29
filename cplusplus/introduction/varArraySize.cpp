#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main() {
    int howManyArrays, howManyQueries, firstIndex, secondIndex;
    cin>>howManyArrays>>howManyQueries;
    cin.ignore();

    int num;
    vector<int> container;
    vector<int> instructions;

    int *A[howManyArrays];

    for(int i = 0; i < howManyArrays; i++)
    {
        //cout<<i<<endl;
        string input;
        getline(cin, input);

        istringstream iss(input);

        while (iss >> num) {
            container.push_back(num);
        }

        A[i] = new int[container[0]];
        for(int j = 0; j < container.size() - 1;j++)
        {
            A[i][j] = container[j+1];
            //cout<<container[j+1]<<" ";
        }
        container.clear();
    } 
    for(int k = 0; k < howManyQueries; k++)
    {
        cin>>firstIndex>>secondIndex;
        instructions.push_back(firstIndex);
        instructions.push_back(secondIndex);
        //cout<<"instructions: "<<firstIndex<<" "<<secondIndex<<endl;  
    }
    for(int o = 0; o < howManyQueries*2; o += 2)
    {
        cout<<A[instructions[o]][instructions[o+1]]<<endl;
    }
    return 0;
}