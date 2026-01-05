//
//  lemonade_change.cpp
//  CppDSAPractice
//
//  Created by Abhaya Nigam on 22/12/25.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class LemonadeStand{
public:
    bool lemonadeChange(vector<int>& bills){
        int five = 0; // Counter for 5$ bills
        int ten = 0; // Counter for 10$ bills
        
        //Process the each customer bills
        for(int bill : bills){
            if(bill == 5){
                // No Change needed
                five++;
            }else if(bill == 10){
                // Customer pays with 10$ and need 5$ as change
                if (five > 0) {
                    five--; // Give one 5$ as change
                    ten++; // Accept the 10$ change
                }else{
                    return false; // cannot provide change
                }
            }
            else{
                // bill == 20
                if(five > 0 && ten > 0){ // customer pays with 20$ -> need 15$ as change
                    five--; // Use One 5$
                    ten--; // And One 10$
                }
                else if(five >=3){
                    five -= 3; // if ten is not present then five 5$ as change
                }
                else{
                    return false; // cannot provide the change
                }
            }
        }
        return true; // Successfully gave change to all cutomers
    }
};

void lemonade_change(){
//    vector<int> bills = {5,5,5,10,20};
    vector<int> bills = {5,5,10,10,20};
    
    cout << "Queue Customers: " << endl;
    for(auto bill : bills){
        cout << bill << " ";
    }cout << endl;
    
    LemonadeStand stand;
    
    bool ans = stand.lemonadeChange(bills);
    
    cout << (ans ?
             "It is possible to provide change for all cutomers." :
             "It is not possible to provide change for all cutomers."
             )
    << endl;
}
