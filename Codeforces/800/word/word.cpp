//https://codeforces.com/problemset/problem/59/A

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string word = "";
    cin >> word;
    int lowerCase = 0;
    int upperCase = 0;

    for (size_t i = 0; i < word.length(); i++){
        if (isupper(word[i])){
            upperCase++;
        } else {
            lowerCase++;
        }     
    }

    if (upperCase > lowerCase){
        for(char &c : word){
            c = toupper(c);
        }
    } else {
        for(char &c : word){
            c = tolower(c);
        }
    }
    cout << word;
    return 0;
}
