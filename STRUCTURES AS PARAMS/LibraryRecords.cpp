#include <iostream>
using namespace std;

struct Book{
    int numberOfPages;
    char title[100];
    char author[100];
};

void displayBook(struct Book book){
   int print = book.numberOfPages / 10;
   for(int i = 0; i < print; i++){
       cout << book.title << " by " << book.author << " (" << book.numberOfPages << " pages)" << endl;
   }
}

int main(){
    Book b1;
    cout << "Enter the number of pages: ";
    cin >> b1.numberOfPages;
    cin.ignore();
    cout << "Enter the title of the book: ";
    cin.getline(b1.title, 100);
    cout << "Enter the author of the book: ";
    cin.getline(b1.author, 100);
    
    displayBook(b1);
    
    return 0;
}
