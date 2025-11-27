/*
Functions in unordered set
    insert()
    begin()
    end()
    count()
    clear()
    find()
    size()
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;

    for (int i = 1; i <= 10; i++)
    {
        s.insert(i);
    }

    cout << "Elements present in the unordered set: ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    cout << "The size of the unordered set is " << s.size() << endl;

    if (s.empty())
    {
        cout << "The set is empty " << endl;
    }
    else
    {
        cout << "The set is not empty" << endl;
    }

    s.clear();

    cout << "The size of the unordered set after clearin all the elements : " << s.size();

    // Unordered Multiset

    unordered_multiset<int> set;

    for (int i = 1; i <= 10; i++)
    {
        s.insert(i);
    }

    s.insert(5);

    cout << "Element present in the unordered multiset :";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    int n = 2;
    if (s.find(2) != s.end())
    {
        cout << n << " present in unordered multiset" << endl;
    }

    s.erase(s.begin());

    cout << "Elements after deleting the first elements: ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    cout << "The size of the unordered multiset is : " << s.size() << endl;

    if (s.empty() == false)
    {
        cout << "The unordered multiset is not empty " << endl;
    }
    else
    {
        cout << "The unordered multiset is empty " << endl;
    }

    s.clear();

    cout << "The size of the unordered multi set is " << s.size() << endl;
}
