#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> sortedList{};
    int reach = 0;
    int objective = 0;
    cin >> reach;
    cin >> objective;

    // Insert odd numbers first
    for (int i = 1; i <= reach; i++) {
        if (i % 2 == 1) {
            sortedList.push_back(i);
        }
    }

    // Insert even numbers after odd numbers
    for (int i = 1; i <= reach; i++) {
        if (i % 2 == 0) {
            sortedList.push_back(i);
        }
    }

    //asignamos una variable para el inicio de la lista
    auto begin = sortedList.begin();
    // avanzamos hasta el objetivo, pero le tenemos que restar uno ya que la variable begin empieza en 1
    advance(begin, objective - 1);
    cout << *begin;

    return 0;
}
//NOT ACCEPTED CUZ TIME LIMIT
//Solution: (study)
//https://github.com/fuwutu/CodeForces/blob/master/318A%20-%20Even%20Odds.cpp