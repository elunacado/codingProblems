// https://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string>
using namespace std;

int main(){
    int count = 0;
    cin >> count;


    for (size_t i = 0; i < count; i++)
    {
        std::string solution;
        string sentence;

        cin >> sentence;
        if (sentence.length() > 10)
        {
            solution += sentence.front();
            solution += to_string(sentence.length()-2);
            solution += sentence.back();
            cout << solution + " \n";
        }
        else{
            cout << sentence + " \n";
        }
    }
    return 0;
}

