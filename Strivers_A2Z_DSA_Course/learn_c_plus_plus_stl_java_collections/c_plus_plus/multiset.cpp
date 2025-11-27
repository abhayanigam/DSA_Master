#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> s;

    for (int i = 1; i <= 10; i++)
    {
        s.insert(i);
    }

    s.insert(3);

    cout << "Elements present in the multiset";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    s.erase(s.begin());
}