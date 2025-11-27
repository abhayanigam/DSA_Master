#include <iostream>
using namespace std;

int main()
{
    unordered_map<int, int> mp;

    for (int i = 1; i <= 10; i++)
    {
        mp.insert({i, i * 10});
    }

    // Now to print the key and value
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << "The key is : " << it->first << endl;
        cout << "The second is " << it->second << endl;
    }
}