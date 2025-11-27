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

void reverseArray(vector<int> arr)
{
    reverse(arr.begin(), arr.end());

    for (auto number : arr)
    {
        cout << number << endl;
    }
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};

    reverseArray(arr);
    return 0;
}