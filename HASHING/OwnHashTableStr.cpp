#include <iostream>
using namespace std;

const int TABLE_SIZE = 10;

class HashTable{
  private:
    string table[TABLE_SIZE];
  public:
    HashTable(){
        for(int i = 0; i < TABLE_SIZE; i++){
            table[i] = "";
        }
    }
    
    int hashMap(string key){
        int hash = 0;
        
        for(char c : key){
            hash += c;
        }
        
        return hash % TABLE_SIZE;
    }
    
    void insertKey(string key){
        int index = hashMap(key);
        int start = index;
        
        while(table[index] != ""){
            index = (index + 1) % TABLE_SIZE;
            if(index == start){
                cout << "HASH TABLE IS FULL.";
                return;
            }
        }
        
        if(key == "-1"){
            cout << "EXITING..." << endl;
            return;
        }
        
        table[index] = key;
        cout << "Added '" << key << "' to index " << index << endl;
    }
    
    void displayTable(){
        for(int i = 0; i < TABLE_SIZE; i++){
            cout << "[" << i << "] - ";
            if(table[i] == ""){
                cout << "{empty}\n";
            }
            else{
                cout << table[i] << endl;
            }
        }
    }
};

int main(){
    HashTable ht;
    string key;
    
    do{
        
        cout << "Enter a string (-1 to quit): ";
        getline(cin, key);
        
        ht.insertKey(key);
        
    }while(key != "-1");
    
    ht.displayTable();
    
    return 0;
    
}
