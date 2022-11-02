//Q6.Accept cost price(CP) and Selling price(SP) of an item. Calculate the ammount of PROFIT/LOSS made by the seller and print the
#include <iostream>

using namespace std;

int main()
{
    int CP, SP, Profit = 0, Loss = 0;
    cout << "Enter the CP and SP prize: " << endl;
    cin >> CP >> SP;
     cout<<"CP pize is:"<<CP<<endl;
     cout<<"SP pize is:"<<SP<<endl;
    //cin >> CP >> SP;
    if (SP > CP)
    {
        Profit = SP - CP;

        cout << "The profit earned by seller is:" << Profit;
    }
    else
    {
        Loss = CP - SP;
        cout << "The loss by seller is:" << Loss;
    }
    return 0;
}
