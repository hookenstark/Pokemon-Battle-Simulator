#include <iostream>
#include "choice.hpp"
using namespace std;

int main() {
    
    int Type;
    int pokeType;
    int pickType;
    
    chooseType(Type);
    choosePokeType(pokeType);
    choosePickType(pickType);
    
    
    if((pokeType==1&&pickType==8)||(pokeType==1&&pickType==12)||(pokeType==1&&pickType==13)||
       (pokeType==3&&pickType==6)||(pokeType==3&&pickType==15)||
       (pokeType==4&&pickType==10)|| (pokeType==4&&pickType==11)||(pokeType==4&&pickType==14)||
       (pokeType==5&&pickType==1)||(pokeType==5&&pickType==8)||(pokeType==5&&pickType==10)||
       (pokeType==6&&pickType==1)||(pokeType==6&&pickType==4)||(pokeType==6&&pickType==8)||
       (pokeType==8&&pickType==9)||(pokeType==8&&pickType==14)||(pokeType==8&&pickType==15)||
       (pokeType==9&&pickType==3)||(pokeType==9&&pickType==5)||(pokeType==9&&pickType==12)||(pokeType==9&&pickType==14)||
        (pokeType==10&&pickType==2)||(pokeType==10&&pickType==6)||(pokeType==10&&pickType==8)||(pokeType==10&&pickType==9)||
       (pokeType==12&&pickType==1)||(pokeType==12&&pickType==8)||
       (pokeType==13&&pickType==4)||(pokeType==13&&pickType==12)||
       (pokeType==14&&pickType==1)||(pokeType==14&&pickType==5)||(pokeType==14&&pickType==6)||(pokeType==14&&pickType==10)||
                                     (pokeType==15&&pickType==5)||(pokeType==15&&pickType==9)||(pokeType==15&&pickType==14))
       {
           for (int i=0; i<=100; i++) {
               cout << "Analysing..." << endl;
           }
            cout << "..." << endl;
            cout << "Result: Super Effective." << endl;
            cout << endl;
        }
       else if((pokeType==1&&pickType==5)||(pokeType==1&&pickType==6)||(pokeType==1&&pickType==14)||
       (pokeType==3&&pickType==3)||(pokeType==3&&pickType==8)||
       (pokeType==4&&pickType==6)|| (pokeType==4&&pickType==13)||
       (pokeType==5&&pickType==14)||(pokeType==5&&pickType==15)||
       (pokeType==6&&pickType==3)||(pokeType==6&&pickType==14)||
       (pokeType==8&&pickType==1)||(pokeType==8&&pickType==5)||(pokeType==8&&pickType==6)||(pokeType==8&&pickType==8)||(pokeType==8&&pickType==12)||
       (pokeType==9&&pickType==8)||
        (pokeType==10&&pickType==10)||(pokeType==10&&pickType==15)||
       (pokeType==12&&pickType==9)||(pokeType==12&&pickType==12)||(pokeType==12&&pickType==14)||
       (pokeType==13&&pickType==13)||
       (pokeType==14&&pickType==4)||(pokeType==14&&pickType==14)||
                                     (pokeType==15&&pickType==8)||(pokeType==15&&pickType==10))
       {
            for (int i=0; i<=100; i++) {
                cout << "Analysing..." << endl;
            }
             cout << "..." << endl;

            cout << "Result: Not Very Effective." << endl;
            cout << endl;
        }
       else{
           for (int i=0; i<=100; i++) {
               cout << "Analysing..." << endl;
           }
            cout << "..." << endl;

           cout << "Result: No Effective." << endl;
           cout << endl;
       }
    
    return 0;
}

