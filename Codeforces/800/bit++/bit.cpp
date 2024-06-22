// https://codeforces.com/problemset/problem/282/A
#include <iostream>
#include <string>
using namespace std;

int main(){
    int count = 0;
    int solution = 0;
    cin >> count;

    for (size_t i = 0; i < count; i++)
    {
        string operation;
        cin >> operation;
        if (operation == "++X" || operation == "X++"){
            solution++;
        } else{
            solution--;
        }
    }
    cout << solution;
    return 0;
}

