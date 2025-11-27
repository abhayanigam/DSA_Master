#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printNTimesNumber(int number)
{
    vector<int> result;
    if (number == 0)
    {
        return;
    }

    result.push_back(number);

    printNTimesNumber(number - 1);

    reverse(result.begin(), result.end());

    for (auto i = result.begin(); i != result.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}

void print1ToNNumberOfTimes(int start, int number)
{
    if (start > number)
    {
        return;
    }

    cout << start << endl;

    print1ToNNumberOfTimes(start + 1, number);
}

int main()
{
    int number;
    cout << "Enter the n number of times: ";
    cin >> number;

    printNTimesNumber(number);

    // Print the number from 1 to N Number of times

    print1ToNNumberOfTimes(1, number);
}