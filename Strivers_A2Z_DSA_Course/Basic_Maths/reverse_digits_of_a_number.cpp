#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void printReverseDigitNumber(int number)
{
    while (number % 10 == 0)
    {
        number /= 10;
    }

    while (number != 0)
    {

        cout << number % 10 << " ";
        number /= 10;
    }
}

void printReverseDigitNumberUsingString(int number)
{
    string s = to_string(number);

    // while (s.empty() && s.back() == '0')
    // {
    //     s.pop_back();
    // }

    reverse(s.begin(), s.end());

    cout << stoi(s) << endl;
}

int main()
{
    int number = 10400;

    // Method 1 :
    printReverseDigitNumber(number);

    // Method 2;
    printReverseDigitNumberUsingString(number);
}