#include<iostream>
using namespace std;

int main(){

    int month;
    int day;
    int year;

    cout << "Enter day = ";
    cin >> day;

    cout << "Enter month = ";
    cin >> month;

    cout << "Enter year = ";
    cin >> year;

    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ) && day>0 && day<=31){
        cout << "valid Date";
    }


    else if (month == 2 ){
        if ( (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))){
            if ( day>0 && day<=29){
                cout << "valid Date";
            }
            else {
                cout << "invalid date";    
                }
            
        }

        else if (day>0 && day<=28)
            cout << "valid Date";

        else {
            cout << "invalid date";
        }

    }

    else if ((month == 4 || month == 6 || month == 9 || month == 11 ) && day>0 && day<=30){
        cout << "valid Date";
    }

    else {
        cout << "invalid Date";
    }


    return 0;

}