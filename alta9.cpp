#include<iostream>
using namespace std;

int main(){

    float weight;

    float height;

    cout << "Enter your weight(kg) = ";
    cin >> weight;

    cout << "Enter your height(meter) = ";
    cin >> height;

    float BMI =  weight/ (height * height);

    cout << "BMI =" << BMI << endl;
    


    if (BMI < 18.5 ){

        cout << "Underweight";

    }

    else if ( BMI >= 18.5 && BMI <= 24.9 ){

        cout << "Normal";

    }
    else if ( BMI >= 25 && BMI <= 29.9 ){

        cout << "Overweight";

    }

    else {

        cout << "Obese";

    }

    return 0;

}