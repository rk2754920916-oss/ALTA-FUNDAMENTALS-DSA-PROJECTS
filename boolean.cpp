#include<iostream>
using namespace std;

int main(){

    int account_balance = 5000;
    int amount;

    cout << "withdrawal amount = ";
    cin >> amount;

    if (amount > 0 && amount <= account_balance ){
        cout << "true" << endl;
    }
    
    else {
        cout << "false" << endl;
    }

    return 0;

}