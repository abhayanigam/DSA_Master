#include <iostream>
using namespace std;

void printNameNTimes(int n, string name)
{
    if (n == 0)
    {
        return;
    }
    cout << name << endl;
    printNameNTimes(n - 1, name);
}

int main()
{
    cout << "Enter the number of times: ";
    int n;
    cin >> n;

    string name;
    cout << "Enter the name to print: ";
    cin >> name;

    printNameNTimes(n, name);
}