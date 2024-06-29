//https://codeforces.com/problemset/problem/1986/A
#include <iostream>
using namespace std;

int main(){
    int loopNumber = 0;
    
    cin >> loopNumber;

    int firstPosition = 0;
    int secondPosition = 0;
    int thirdPosition = 0;
    int result = 0;
    
    for (size_t i = 0; i < loopNumber; i++){
        cin >> firstPosition;
        cin >> secondPosition;
        cin >> thirdPosition;  
        int destination = max(firstPosition, max(secondPosition, thirdPosition));
        int start = min(firstPosition, min(secondPosition, thirdPosition));
        result = destination-start;
        cout << result << " \n";
    }
    return 0;
}