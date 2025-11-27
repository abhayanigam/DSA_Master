#include <iostream>
using namespace std;

bool isArmstrongNumber(int number)
{
    int size = to_string(number).length();

    int original = number;

    int sumNumber = 0;

    while (number != 0)
    {
        int num = number % 10;
        sumNumber += pow(num, size);

        number /= 10;
    }

    return (original == sumNumber) ? true : false;
}

int main()
{
    int number;

    (isArmstrongNumber(number)) ? cout << "This is an amrstrong number" << endl : cout << "This is not an amrstrong number" << endl;
}