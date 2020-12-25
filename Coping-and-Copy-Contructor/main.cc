#include <iostream>

using namespace std;

struct Vector2{
    float x, y;
    char* str;
    friend ostream& operator<<(ostream &pstream, const Vector2& obj){
        pstream<<obj.x<<" "<<obj.y<<" "<<obj.str;
        return pstream;
    }
};

void test01(){
    char* t = new char[3]{'c','b', 'a'};
    Vector2 a = {1,2, t};
    Vector2 b = a;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<"----------"<<endl;;
    b.x = 3;
    b.str[0] = 'a';
    cout<<a<<endl;
    cout<<b<<endl;
}

void test00(){
    std::string str1 = "hello";
    std::string str2 = str1;

    std::cout<<str1<<endl;
    std::cout<<str2<<endl;
    std::cout<<"----------"<<endl;
    str2[0] = 'a';
    std::cout<<str1<<endl;
    std::cout<<str2<<endl;
}

int main(){
    test01();
    return 0;

    test00();
    return 0;
}
