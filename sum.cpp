// Q1.Write a program to accept an integer N and calculate the sum of its digits. Please note N can have maximum 5 digits.

#include <iostream>

using namespace std;

int main()
{
    int num, datastore, sum = 0;
     number:
    cout << "Enter a number:";
    cin >> num;
    if(num>99999)
    {
        cout<<"Enter number should be less than five digit\n";
        goto number;
    }
    while (num != 0)
    {
        datastore = num % 10;
        sum = sum + datastore;
        num = num / 10;
    }
    cout << "The sum of Entered digit are:" << sum;

    return 0;
}
