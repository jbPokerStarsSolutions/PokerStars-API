#include <iostream>
///Hpp file include in libPoker_dll.a library
#include "poker_dll.hpp"

using namespace std;

int main()
{
    ///Variable to verify if PokerStars window is active
    bool poker_table_active;

    ///PokerStars window dimensions dimensions
    long xmin, xmax, ymin, ymax;

    ///Player action
    char action;

    ///Money to bet in case player wan to bet
    double value_bet;

    ///This loop is running when a PokerStars window is not detected
    do{
       ///The function detect_poker_window provides the size of the pokerstars window
       poker_table_active = detect_poker_window(&xmin, &xmax, &ymin, &ymax);
    }while(poker_table_active==0);

    ///Loop for playing online PokerStars in real time
    while(1) {
        ///In here you should select which action you want to do : fold, call or bet
        cout << "Select your Poker Action: " << endl;
        cout << "Fold-> f" << endl;
        cout << "Call-> c" << endl;
        cout << "Bet-> b" << endl;
        cin >> action;
        switch (action){
            case 'f' :
                ///Function to fold
                fold(&xmin, &xmax, &ymin, &ymax);
                break;
            case 'b' :
                ///Function to bet. In here you also need to define how much you wanna bet
                cout << "How many to bet : "<< endl;
                cin >> value_bet;
                bet(&xmin, &xmax, &ymin, &ymax, &value_bet);
                break;
            case 'c' :
                ///Function to call
                call(&xmin, &xmax, &ymin, &ymax);
                break;
            default :
                cout << "Select another Poker Action" << endl;
        }
    }
    return 0;
}
