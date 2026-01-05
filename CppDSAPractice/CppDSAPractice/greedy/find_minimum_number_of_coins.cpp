//
//  find_minimum_number_of_coins.cpp
//  CppDSAPractice
//
//  Created by Abhaya Nigam on 21/12/25.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int numberOfCoinsORNotesNeeded(vector<int>& arr, int value){
    sort(arr.begin(), arr.end());
    
    int count = 0;
    
    for (int i = arr.size()-1; i>= 0; i--) {
        if (arr[i] <= value) {
            cout << arr[i] << " ";
            value -= arr[i];
            count++;
        }
    }
    
    cout << endl;
    
    return count;
}

void find_minimum_number_of_coins(){
    vector<int> coinsOrNotes = { 1, 2, 5, 10, 20, 50, 100, 500, 1000};
//    int value = 70;
//    int value = 121;
    int value = 49;
    
    cout << "Number of coins and notes needed : " << numberOfCoinsORNotesNeeded(coinsOrNotes,value) << endl;
}
