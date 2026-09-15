#include<iostream>
using namespace std;

int main(){

   int itemprice;

   cout << "item price = ";
   cin >> itemprice;

   int discount = 1000* 10/100;
   int discountedprice = itemprice - discount;

   int tax = discountedprice * 18/100;
   int finalprice = discountedprice + tax;

   cout << "FINAL PRICE= " << finalprice << endl;

    return 0;

}