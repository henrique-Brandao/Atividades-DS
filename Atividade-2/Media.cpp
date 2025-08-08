//
// Created by 232.953563 on 08/08/2025.

#include <iostream>

using namespace std;

int main() {
    double av1, av2, av3;

    cout << "digite a nota da av1" << endl;
    cin >> av1;
    cout << "digite a nota da av2" << endl;
    cin >> av2;
    cout << "digite a nota da av3" << endl;
    cin >> av3;

    double media = (av1 + av2 + av3) / 3;
    cout << "Sua media e: " << media << endl;
    return 0;
}