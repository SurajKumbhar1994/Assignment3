//Q5.Write a program to accept a 5 digit integer N and then generates a number M by adding 1 to each digit.
#include <iostream>

using namespace std;

int main()
{
    int num, datastore, sum = 0,temp;
    temp=num+1;
    cout << "Enter a number:";
    cin >> num;
    while (num != 0)
    {
        datastore = num % 10;
        //cout<<"The value of M is "<<datastore;
        //sum = sum + datastore;
        num = num / 10;
    }
    cout << "The sum of Entered digit are:" << sum;
    return 0;
}