#include <iostream>
using namespace std;

const int TABLE_SIZE = 10;

class HashTable{
    private:
        int table[TABLE_SIZE];
    public:
        HashTable(){
        
            for(int i = 0; i < TABLE_SIZE; i++){
                table[i] = -1;
            }
        }
        
        int hashMap(int key){
            return key % TABLE_SIZE;
        }
        
        void insertKey(int key){
            int index = hashMap(key);
            int start = index;
            
            while(table[index] != -1){
                index = (index + 1) % TABLE_SIZE;
                if(index == start){
                    cout << "HASH TABLE IS FULL DUMBASS" << endl;
                    return;
                }
            }
            
            if(key >= 0){
                table[index] = key;
                cout << "Inserted " << key << " at index " << index << "." << endl;
            }
            else{
                cout << "EXITING.." << endl;
                return;
            }
        }
        
        void displayTable(){
            for(int i = 0; i < TABLE_SIZE; i++){
                cout << "[" << i << "]" << " - ";
                if(table[i] == -1){
                    cout << "{empty}" << endl;
                }
                else{
                    cout << table[i] << endl;
                }
            }
        }
};

int main(){
    HashTable ht;
    
    int num;
    
    do{
        cout << "Enter number (-1 to quit): ";
        cin >> num;
        
        ht.insertKey(num);
        
    }while(num >= 0);
    
    ht.displayTable();
    
    return 0;
}
