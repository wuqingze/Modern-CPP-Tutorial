#include <iostream>

using namespace std;

int* integer(){
    static int *i = new int(10);
    return i;
}

// &&代表临时变量，不需要进行生命周期管理
void print(string && str){
    cout<<str<<endl;
}

// rvalue means temporary value, lvalue means persistent value
int main(){
    string tmp = "hello world";
    print("hello world");
    return 0;

    *integer() = 11;
    cout<<*integer()<<endl;
    return 0;
}
