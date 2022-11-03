//Q9.Write a program to accept a list L1 of N integers. Accept integer M. Multiply each integer in the list by M and generate a new list
// L2. Print the lists L1 and L2.
#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>

using namespace std;

void acceptList(list<int>l)
{
    list<int>::iterator itr = l.begin();
    for (auto itr = l.begin(); itr != l.end(); ++itr)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
}

void newList(list<int>l,list<int>&l2,int m)
{
    list<int>::iterator itr = l.begin();
    int r;
     for (auto itr = l.begin(); itr != l.end(); ++itr)
    {
        r=*itr * m;
        l2.push_back(r);
    }
}

void insertData(list<int> &l, int N)
{
    int a;
    cout << "Enter Elements to insert in the list" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        l.push_back(a);
    }
}

int main()
{
    int N,M;
    list<int> L1;
    list<int>L2;
    cout << "Enter Size of List" << endl;
    cin >> N;
    if(N>0)
    {
    cout<<"Enter Multiplication Factor M"<<endl;
    cin>>M;
    insertData(L1, N);
    newList(L1,L2,M);
    cout<<"List L1= ";
    acceptList(L1);
    cout<<"List L2= ";
    acceptList(L2);
    }
    else
    {
        cout<<"Number in the list must be greater than 0"<<endl;
    }
    
    return 0;
}