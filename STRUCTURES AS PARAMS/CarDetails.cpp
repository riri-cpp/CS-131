#include <iostream>
using namespace std;

struct Car{
  char brand[20];
  char model[20];
  int year;
  float mileage;
};

float calculateDepreciation(float mileage){
    if(mileage >= 100000){
        return 0.30;
    }
    else if(mileage >= 50000){
        return 0.50;
    }
    else if(mileage >= 10000){
        return 0.10;
    }
    else{
        return 0.0;
    }
}

void displayCarDetails(struct Car car){
    cout << "Brand: " << car.brand << endl;
    cout << "Model: " << car.model << endl;
    cout << "Year: " << car.year << endl;
    cout << "Mileage: " << car.mileage << endl;
    float dep = calculateDepreciation(car.mileage) * 100;
    cout << "Depreciation: " << dep << "%";
}

int main(){
    Car c1;
    cout << "Enter the brand of the car: ";
    cin.getline(c1.brand, 20);
    cout << "Enter the model of the car: ";
    cin.getline(c1.model, 20);
    cout << "Enter the year of the car: ";
    cin >> c1.year;
    cout << "Enter the mileage of the car: ";
    cin >> c1.mileage;
    
    cout << endl;
    
    cout << "Car Details:" << endl;
    displayCarDetails(c1);
    return 0;
}
