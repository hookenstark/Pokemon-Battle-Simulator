#include <iostream>
#include "choice.hpp"
using namespace std;

int chooseType(int &a){
    cout << "Please enter the type of combat that you want: " <<endl;
    cout << "1.Attacking type" << endl;
    cout<< "2.Defending type" << endl;
    cin >> a;
    if (a == 1) {
        cout << "You chose: Attacking type.";
        return a;
    }
    else if(a == 2){
        cout << "You chose: Defending type.";
        return a;
    }
    else{
        cout << endl;
        cout << "Error... Please try again!" << endl;
        cout << endl;
        chooseType(a);
    }
    return 0;
};

int choosePokeType(int &b){
    cout << " Under this genre you have 15 different types of Pokemon to pick: " << endl;
    cout << "-----------------------------------" << endl;
    cout << "| 1.Bug       2.Dragon  3.Electric|" << endl;
    cout << "| 4.Fighting  5.Fire    6.Flying  |" << endl;
    cout << "| 7.Ghost     8.Grass   9.Ground  |" << endl;
    cout << "|10.Ice      11.Normal 12.Poison  |" << endl;
    cout << "|13.Psychic  14.Rock   15.Water   |" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Enter the type you want: ";
    cin >>b;
    if (b>15 || b<1) {
        cout << endl;
        cout << "Error... Please try again!" << endl;
        cout << endl;
        choosePokeType(b);
    }
    cout << endl;
    
    return 0;
};

int choosePickType(int &c){
    cout << "Now, pick a type of Pokemon you want to fight with: " << endl;
    cout << "-----------------------------------" << endl;
    cout << "| 1.Bug       2.Dragon  3.Electric|" << endl;
    cout << "| 4.Fighting  5.Fire    6.Flying  |" << endl;
    cout << "| 7.Ghost     8.Grass   9.Ground  |" << endl;
    cout << "|10.Ice      11.Normal 12.Poison  |" << endl;
    cout << "|13.Psychic  14.Rock   15.Water   |" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Enter the type you want: ";
    cin >> c;
    if (c>15 || c<1) {
        cout << endl;
        cout << "Error... Please try again!" << endl;
        cout << endl;
        choosePokeType(c);
    }
    cout << endl;
    
    return 0;
};
