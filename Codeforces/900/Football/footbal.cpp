// https://codeforces.com/problemset/problem/96/A
#include <iostream>
#include <string>
using namespace std;

int main(){
    string players;
    cin >> players;

    if(players.length() < 7){
        cout << "NO";
        return 0;
    } 

    //Por cada numero en el string
    for (size_t i = 0; i <= players.length() - 7; i++){
        //Asignamos el current num como el primer valor y lo cambiamos con cada iteracion del bucle
        char currentNum = players[i];
        bool isDangerous = true;

        for (size_t j = 1; j < 7; j++){
            //revisamos el string del actual a los siguientes 7 en los 
            if(players[i + j] != currentNum){
                //si no son iguales declaramos fase y terminamos el ciclo
                isDangerous = false;
                break;
            }
            
        }
        if (isDangerous){
            cout << "YES"; return 0;
        }    
    }
    cout << "NO";
    return 0;
}

