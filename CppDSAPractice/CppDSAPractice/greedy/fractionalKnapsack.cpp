//
//  fractional_knapsack.cpp
//  CppDSAPractice
//
//  Created by Abhaya Nigam on 05/01/26.
//

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

struct Item{
    int value;
    int weight;
};

// Comparator function to sort items by value/ weight ratio
bool static comp(Item a, Item b){
    double r1 = (double) a.value / (double) a.weight;
    double r2 = (double) b.value / (double) b.weight;
    
    return r1>r2; // Return true if the ratio of item a is greater than item b;
}

double getFractionalKnapsack(int weight, Item arr[], int size){
    sort(arr, arr+size, comp);
    
    int currentWeight = 0;
    double finalValue = 0.0;
    
    for (int i = 0; i<size; i++) {
        if (currentWeight + arr[i].weight <= weight) {
            currentWeight += arr[i].weight;
            finalValue += arr[i].value;
        }else{
            int remaining = weight - currentWeight;
            finalValue += (arr[i].value/arr[i].weight) * remaining;
            break;
        }
    }
    
    return finalValue;
}

void fractionalKnapsack(){
    const int size = 3;
    int weight = 50;
    Item arr[size] = { {100,20},{60,10},{120,30} };
    
    double ans = getFractionalKnapsack(weight,arr,size);
    
    cout << "The maximum value is " << ans << endl;
    
}
