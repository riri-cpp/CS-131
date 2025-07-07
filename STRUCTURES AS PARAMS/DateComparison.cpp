#include <iostream>
using namespace std;

typedef struct{
    int month;
    int day;
    int year;
}Date;

int compareDates(Date a, Date b){
    if(a.month < b.month){
        return -1;
    }
    else if(a.month > b.month){
        return 1;
    }
    else{
        if(a.day < b.day){
            return -1;
        }
        else if(a.day > b.day){
            return 1;
        }
        else{
             if(a.year < b.year){
                return -1;
            }
            else if(a.year > b.year){
                return 1;
            }
            else{
                return 0;
            }
        }
    }
}

int main(){
    Date d1, d2;
    cout << "Enter the first date (MM DD YYYY): ";
    cin >> d1.month >> d1.day >> d1.year;
    cout << "Enter the second date (MM DD YYYY): ";
    cin >> d2.month >> d2.day >> d2.year;
    
    int result = compareDates(d1, d2);
    if(result == -1){
        cout << "The first date is before the second date.";
    }
    else if(result == 1){
        cout << "The second date is before the first date.";
    }
    else{
        cout << "Both dates are the same.";
    }
    
    return 0;
}
