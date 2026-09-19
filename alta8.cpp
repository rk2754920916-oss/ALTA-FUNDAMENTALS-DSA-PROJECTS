#include<iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter your number = ";
    cin >> n;

    if (n % 15 == 0){

        cout << "yes";
    }

    else {
        cout << "no";
    }
    
    return 0;

}