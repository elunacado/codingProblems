//https://codeforces.com/problemset/problem/1985/A

#include <iostream>
#include <string>
using namespace std;

int main(){
    int numberOfCicles = 0;
    string firstString = "";
    string secondString = "";
    
    cin >> numberOfCicles;
    
    
    for (size_t i = 0; i < numberOfCicles; i++)
    {
        cin >> firstString;
        cin >> secondString;
        char firstLetterFromFirstString = firstString[0];
        char firstLetterFromSecondString = secondString[0];
        
        firstString[0] = firstLetterFromSecondString;
        secondString[0] = firstLetterFromFirstString;

        cout << firstString << " " << secondString << "\n"; 
    }

    return 0;
    
}