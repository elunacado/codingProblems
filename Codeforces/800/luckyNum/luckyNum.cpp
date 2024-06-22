// https://codeforces.com/problemset/problem/110/A

#include <iostream>
#include <string>
using namespace std;

int main(){
    long long int number = 0;
    int luckyNumAmount = 0;
    cin >> number;
    string str = to_string(number);

    for (size_t i = 0; i < str.length(); i++){
        if(str[i] == '7' ||  str[i] == '4'){
            luckyNumAmount++;
        }
    }
    if (luckyNumAmount != 7 && luckyNumAmount != 4){
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}
