// Q5.Write a program to accept a 5 digit integer N and then generates a number M by adding 1 to each digit.
#include <iostream>

using namespace std;
int findreverse(int temp)

{
    int v,reverse =0;
    while(temp!=0){
     v = temp % 10;
     reverse = reverse * 10 + v;
    temp = temp / 10;}
    return reverse;
}
int main()
{
    int num, datastore, sum = 0, temp;
    temp = 0;
    cout << "Enter a number:";
    cin >> num;
    while (num != 0)
    {
        datastore = num % 10;
        // cout<<"The value of M is "<<datastore;
        // sum = sum + datastore;
        temp = temp * 10 + datastore + 1;

        num = num / 10;
    }
 sum=findreverse(temp);
    cout << "The sum of Entered digit are:" << sum;
    return 0;
}