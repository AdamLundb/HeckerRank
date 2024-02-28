#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

string numberCheck(int n) {
    switch(n) {
        case 1:
            return "one";
            break;
        case 2:
            return "two";
            break;
        case 3:
            return "three";
            break;
        case 4:
            return "four";
            break;
        case 5:
            return "five";
            break;
        case 6:
            return "six";
            break;
        case 7:
            return "seven";
            break;
        case 8:
            return "eight";
            break;
        case 9:
            return "nine";
            break;
        default:
            if (n % 2 == 0)
            {
                return "even";
            } else {
                return "odd";
            }
        }    
}

int main() {
    // Complete the code.
    int firstNumber, secondNumber;
    cin>>firstNumber;
    cin>>secondNumber;
    for(firstNumber; firstNumber <= secondNumber; firstNumber++)
    {
        cout<<numberCheck(firstNumber)<<endl;
    }
    return 0;
}