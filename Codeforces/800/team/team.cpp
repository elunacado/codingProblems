// https://codeforces.com/problemset/problem/231/A
#include <iostream>
#include <string>
using namespace std;

int main(){
    int count = 0;
    int solution = 0;
    cin >> count;


    for (size_t i = 0; i < count; i++)
    {
        
        int petya;
        int vasya;
        int tonya;

        cin >> petya;
        cin >> vasya;
        cin >> tonya;

        if((petya == 1 && (vasya == 1 || tonya == 1)) || (vasya == 1 && (petya == 1 || tonya == 1)) || (tonya == 1 && (petya == 1 || vasya == 1))){
            solution += 1;
        }

    }
    cout << solution;
    return 0;
}

