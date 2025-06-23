#include <iostream>
#include <iomanip>
using namespace std;

double calculateAveRate(double quality, double price, double service){
    double aveRate = (quality + price + service) / 3;
    return aveRate;
}

void productRatings(string productName, string category, double quality, double price, double service){
    cout << "Product Name: " << productName << endl;
    cout << "Category: " << category << endl;
    cout << "Quality Rating: " << quality << endl;
    cout << "Price Rating: " << price << endl;
    cout << "Service Rating: "<< service << endl;
}

int main(){
    string productName, category;
    double quality, price, service;
    cout << "Enter Product Name: ";
    cin >> productName;
    cout << "Enter Category: ";
    cin >> category;
    cout << "Enter Quality Rating: ";
    cin >> quality;
    cout << "Enter Price Rating: ";
    cin >> price;
    cout << "Enter Service Rating: ";
    cin >> service;

    productRatings(productName, category, quality, price, service);
    double average = calculateAveRate(quality, price, service);
    cout << "Overall Average Rating: " << fixed << setprecision(2) << average;
    return 0;
}
