//Q2.Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N. Please note N can have maximum 5 digits.
#include <iostream>

using namespace std;

int main()
{
    int num, datastore, reverse = 0;
    number:
    cout << "Enter a number:";
    cin >> num;
      if(num>99999)
    {
        cout<<"Enter number should be less than five digit \n";
        goto number;
    }
    while (num != 0)
    {
        datastore = num % 10;
        reverse = reverse * 10 + datastore;
        num = num / 10;
    }
    cout << "The reverse of Entered digit are:" << reverse;
    return 0;
}