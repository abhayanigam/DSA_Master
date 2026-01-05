// #include <bits/std++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <unordered_map>
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

int main()
{
    vi arr = {1, 2, 2, 2, 2, 2, 3, 3, 3};

    unordered_map<int, int> freq;

    for (int i : arr)
    {
        cout << "The value of i : " << i << endl;
        freq[i]++;

        cout << "The value of frequency is : " << freq[i] << endl;
    }

    for (auto &p : freq)
    {
        cout << p.first << " appears " << p.second << " times\n";
    }

    cout << endl;

    cout << arr[2] << " appears " << freq[arr[2]] << " times\n";
    return 0;
}

/*
    Note :
        The unordered_map is only used mostly in hash-based logic:
        like :
            1. memorization(DP)
            2. caching
            3. frequency counting
            4. lookup table
            5. mapping ids --> objects

    use unordered_map for fast lookups
    switch to map if you need ordering or gauranteed performance

    unordered_map genrally use more memory than map.


*/