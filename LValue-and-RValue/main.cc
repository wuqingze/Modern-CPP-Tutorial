#include <iostream>

using namespace std;

int* integer(){
    static int *i = new int(10);
    return i;
}

// &&������ʱ����������Ҫ�����������ڹ���
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
