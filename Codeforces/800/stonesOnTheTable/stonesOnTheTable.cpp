//https://codeforces.com/problemset/problem/266/A

#include <iostream>
#include <string>
using namespace std;

int main(){
    string rocksOnTheTable = "";
    int amountOfRocks = 0;
    int count = 0;

    int consecutiveStones = 0;

    cin >> amountOfRocks;
    cin >> rocksOnTheTable;

    //POR CADA PIEDRA EN LA FILA
    for (int i = 0; i < amountOfRocks; i++){
        //REVISAR SI LA PIEDRA SIGUIENTE ES IGUAL A LA ACTUAL
        if(rocksOnTheTable[i] == rocksOnTheTable[i + 1]){
            consecutiveStones++;
        }
    }   
    cout << consecutiveStones;
}
