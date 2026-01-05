#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

void findHighestAndLowestfreqElement(vector<int> arr)
{
    unordered_map<int, int> freq;

    for (auto i : arr)
    {
        freq[i]++;
    }

    int min = 2;
    int max = 0;

    for (auto &p : freq)
    {
        if (p.second < min)
        {
            min = p.first;
        }
        if (p.second > max)
        {
            max = p.first;
        }
    }

    cout << "The min value is : " << min << " and max value is : " << max << endl;
}

int main()
{
    vector<int> arr = {10, 5, 10, 15, 10, 5};

    findHighestAndLowestfreqElement(arr);
}