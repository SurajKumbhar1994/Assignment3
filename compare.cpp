// Q3.Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N. Please note N can have maximum 5 digits. Print the numbers N and M. Compare N with M and print the result.
#include <iostream>

using namespace std;

int main()
{
    int num, datastore, reverse = 0, temp;
    number:
    cout << "Enter a number:";
    cin >> num;
    if(num>99999)
    {
        cout<<"Enter number should not be greter five digit \n";
        goto number;
    }
    temp=num;
    while (num != 0)
    {
        datastore = num % 10;
        reverse = reverse * 10 + datastore;
        num = num / 10;
    }
    cout << "The reverse of Entered digit are:" << reverse << endl;
    
    if (temp > reverse)
    {
        cout << "The user entered number is greter than reverse ";
    }
    else
    {
        cout << "The reverse number is greter";
    }

    return 0;
}