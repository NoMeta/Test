/*main.cpp        Anthony Cote        2018/05-06      Best code ev4r*/
#pragma once
#include "stdafx.h"
#include <iostream>
using namespace std;

const int PI = 3.1416;

// boolIsFalse(bool b)
bool boolIsFalse(bool b) {
    if (b == true) { ; }
    else { return true; }
    return false;
}

int main() {
    //srand(time(NULL));
    char next = 0;
    char nom[99999];
    int i = 0;

    cout << "What is your name?                                                              ";
    while (boolIsFalse(next == 10)) {
        next = cin.get();
        nom[i] = next;
        i = i + 1;
    }
    nom[i - 1] = '.';

    cout << "Hello ";
    for (int j = 0; j < i; j++){
        if (nom[j] == '.')
            break;
        cout << nom[j];
    }
    while (true);
    exit(1);
    return 0;
}