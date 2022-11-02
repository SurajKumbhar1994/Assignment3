//Q4.Write a program to accept 5 digit integer N and calculate the sum of its first and fifth digit

#include<iostream>

using namespace std;

int main(){
    int N,sum=0,firstdigit,lastdigit;
    number:
    cout<<"Enter the digit: ";
    cin >>N;
    if(N>99999)
    {
        cout<<"Enter number should be less than five digit\n";
        goto number;
    }

    if (N>= 5)
    {
        lastdigit = N%10;
        while (N >= 10)
        {
            N =N/10;
        }
        firstdigit =N;

        sum = firstdigit + lastdigit;
    }
   cout<< "The sum of firstdigit and last digit:" <<sum;
  return 0;
}