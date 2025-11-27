// #include <bits/std++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

#define vi vector<int>
#define vs vector<string>
#define st set<int>
#define vvi vector<vi>
#define vvs vector<vs>
#define ppi pair<int, int>
#define ppi pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

void printNTo1NumberTimes(int number, int end)
{
    if (number < end)
        return;

    cout << number << endl;

    printNTo1NumberTimes(number - 1, end);
}

int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;

    printNTo1NumberTimes(number, 1);
    return 0;
}