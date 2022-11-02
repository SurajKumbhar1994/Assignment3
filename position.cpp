// Q7.Write a program to a accept a list of N integers. Find the largest and the smallest number in the list and their respective positions in the list.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int N;
    vector<int> vec;
    cout << "Enter the number:";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        vec.push_back(num);
    }

    vector<int>::iterator it;
    int max = *max_element(vec.begin(), vec.end());
    cout << "Maximum number is:" << max << endl;
    cout << "Max element at : ";
    for (int j = 0; j < vec.size(); j++)
    {
        if (vec[j] == max)
            cout << (j + 1) << " ";
    }
    cout <<endl;

    int min = *min_element(vec.begin(), vec.end());
    cout <<"Minimum number is: "<< min<<endl;
    cout << "Min element at : ";
    for (int k = 0; k < vec.size(); k++)
    {
        if (vec[k] == min)
            cout << (k + 1) << " ";
    }
    /*
    int N,num,minimum,maximum;
    //maximum=0,minimum=INT_MAX;
    cout <<"Enter the list of N integer:";
    cin>>N;
    for (int i=0;i<N;i++)
    {
    cout<<" Entered the Number:";
    cin>>num;
    if (num >maximum) maximum = num;
    if (num<minimum ) minimum =num;

    }
    cout<<"The largest number is:"<<maximum<<endl;
    cout<<"The minimum number is:"<<minimum<<endl;
    return 0;
    */
}