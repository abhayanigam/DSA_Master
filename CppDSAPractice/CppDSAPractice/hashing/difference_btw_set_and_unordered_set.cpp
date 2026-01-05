/*
    /// Set vs Unordered_set in C++
        > set, is almost the same as an unordered set in C++
        > Note :
            The main defference between an unordered set and a set is that while a stores unique
            elemenets in increasing order of their value , unordered set stores the elements
            randomly, in no praticular order.

        > The Set in C++, on the other hand , uses a balanced tree for its implementation, which
        is why it can store elements in sorted order.

    /// Time Complexity:
        > Unordered Set : In Average Case : O(1) for all opeartions
        > Set : In Average Case : O(log(n))

    /// Space Complexity:
        > Both have a space complexity of O(n) , where n is the number of elements stored in them.
*/

#include <iostream>
#include <unordered_set>
#include <unordered_map>
using namespace std;

void printNumberHavingDuplicats(int nums[])
{
    unordered_set<int> set;

    for (int i = 0; i < 10; i++)
    {
        if (set.count(nums[i]) == 1)
        {
            cout << nums[i] << " ";
        }
        else
        {
            set.insert(nums[i]);
        }
    }
    cout << endl;
}

void printNumberHavingDuplicatsSolution()
{
    // unordered_set<int> set = {1, 8, 10, 3, 6, 18, 1, 18};
    unordered_set<int> set = {1, 5, 1, 0, 9, 2, 9, 1, 5, 10};

    auto itr = set.begin();

    while (itr != set.end())
    {
        cout << *itr << " ";

        itr++;
    }

    cout << endl;

    int arr[] = {1, 5, 1, 0, 9, 2, 9, 1, 5, 10};
    printNumberHavingDuplicats(arr);
}
