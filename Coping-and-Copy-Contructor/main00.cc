#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class String{
    private:
        char *val;
        int size;

    public:
        String(const char *val_){
            size = strlen(val_);
            val = new char[size+1];
            memcpy(val, val_, size);
            val[size] = '\0';
        }

        String(const String &str): size(str.size){
            val = new char[size+1];
            memcpy(val, str.val, size);
            val[size] = 0;
        }

        char& operator[](int i){
            return val[i];
        }

    friend ostream& operator<<(ostream &pstream, const String& str){
        pstream<<str.val;
        return pstream;
    }
};

void PrintString(String str){
    cout<<str<<endl;
}

int main(){
    String first = "Hello World";
    String second = first;
    
    second[0] = 'A';

    PrintString(first);
    PrintString(second);
    return 0;
}
