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

int findFactorial(int number)
{
    if (number < 1)
    {
        return 1;
    }

    return number * findFactorial(number - 1);
}

int main()
{
    int number;
    cout << "Enter the number :";
    cin >> number;

    cout << "The factorial of this number is : " << findFactorial(number) << endl;
    return 0;
}