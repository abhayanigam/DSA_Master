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

void printStringPlaindrom(string str)
{
    string original = str;
    int left = 0, right = str.length() - 1;

    while (left < right)
    {
        swap(str[left], str[right]);
        left++;
        right--;
    }

    cout << "The palindrom is : " << str << endl;

    cout << "Its a palindrom ? " << (original == str ? "Yes" : "No") << endl;
}

int main()
{
    string str = "Hello World";

    printStringPlaindrom(str);

    return 0;
}