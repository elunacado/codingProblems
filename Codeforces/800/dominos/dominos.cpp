//https://codeforces.com/problemset/problem/50/A

#include <iostream>
#include <string>
using namespace std;

int main(){
    int solution = 0;
    int X = 0;
    int Y = 0;
    
    cin >> X;
    cin >> Y;  
    /*
    if i multiply the 2 sides i get the area which i can 
    divide it by 2 (since the area of each domino piece it's
    2 * 1) giving me the amount of maximum space the
    domino pieces can use without overlapping
    */
    solution = (X * Y)/2;
    
    cout << solution;
    return 0;
}