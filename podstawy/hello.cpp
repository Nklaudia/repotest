/*
 * hello.cpp
 * 
 * Copyright 2017  <>
 * 
 */


#include <iostream>

using namespace std;
#define ROK_TERAZ 2017
#define ROK_CPP 1983

int parzyste(int n){
    int i;
    for(i=0; i<=n; i+=2)
        cout << i << " ";
}

void sito(int n)
{   for ( int i=2; i*i<=n; i++)
}

int main(int argc, char **argv) {
    
    //char imie[20]
    
    string imie;
    int wiek;
    int rok_urodzenia;
    cout << "Imie?";
    cin >> imie;
    cout << "Wiek";
    cin >> wiek;
    rok_urodzenia = ROK_TERAZ-wiek;
    cout << "Witaj!" << imie << endl;
    cout << "Rok urodzenia: " << rok_urodzenia << endl;
    if(ROK_CPP < rok_urodzenia)
        cout << "Jestem starszy!";
    else if(ROK_CPP > rok_urodzenia)
        cout << "Jestem młodszy!";
    else if(ROK_CPP == rok_urodzenia)
        cout << "Tyle samo lat!";
    
    int n;
    cout <<"Podaj liczbe naturalna: ";
    cin >> n;
    cout << "Ilość parzystych " << parzyste(n);
    
    return 0;
}

