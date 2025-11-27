#include <iostream>
#include <vector>
using namespace std;

vector<int> printAllDivisor(int number)
{
    vector<int> result;

    for (int i = 0; i <= number; i++)
    {
        if (number % i == 0)
        {
            result.push_back(i);
        }
    }

    return result;
}

int main()
{
    vector<int> result = printAllDivisor(36);

    for (auto it = result.begin(); it != result.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}