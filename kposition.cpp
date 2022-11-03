//Q8.Write a program to accept a list of N integers. Accept integer K. Find the Kth smallest number in the list and its position.

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int N,k, min = INT_MAX, count=0;
    vector<int> vec;
    cout << "Enter the number:";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        vec.push_back(num);
    }
cout<<"Enter the value of k:"<<endl;
cin >> k;
/*
//10,20,30,4,5,6,7,8,,9,11 
for(int i=0 ; i<vec.size(); i++){
    while(count <= k){
        if(vec[i] < min){
            min = vec[i];
            count++;
           // cout << vec[i] << " " << count << endl;
        }
       // cout << vec[i] << " " << count << endl;
    }
    cout << count << endl;
*/

sort(vec.begin(), vec.end());
for(int i=0; i<vec.size(); i++){
    cout << vec[i] << " ";
    
}

    


}