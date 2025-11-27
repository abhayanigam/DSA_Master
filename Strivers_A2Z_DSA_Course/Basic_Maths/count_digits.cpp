#include <iostream>
using namespace std;

void printNumberOfDigits(int number)
{
    int count = 0;

    while (number != 0)
    {
        number += number / 10;
        count++;
    }

    cout << "The Total Number of digit are : " << count << endl;
}

void printTotalSumOfDigits(int number)
{
    int sum = 0;

    while (number != 0)
    {
        sum += number % 10;
        number /= 10;
    }

    cout << "The sum of the number is : " << sum << endl;
}

void printNumberLineByLine(int number)
{
    // int arr[100];

    // int i = 0, j, var;

    while (number != 0)
    {
        // var = number % 10;
        // arr[i] = var;
        // i++;
        // number /= 10;

        cout << number % 10 << " ";
        number /= 10;
    }

    // for (int j = 0; j < i; j++)
    // {
    //     cout << arr[j] << " - ";
    // }
    // cout << endl;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    printNumberOfDigits(number);

    printTotalSumOfDigits(number);

    printNumberLineByLine(number);
}