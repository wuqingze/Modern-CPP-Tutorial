#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void PrintHello(){
    cout<<"hello world"<<endl;
}

void PrintValue(int a){
    cout<<a<<endl;
}

void PrintValue01(int a){
    cout<<"--"<<a<<endl;
}

int PrintValue00(int a){
    cout<<a<<endl;
    return a;
}

void print(vector<int> &list, void(*f)(int )){
    for(auto v:list) f(v);
}

void print(vector<int> &list, int(*f)(int )){
    for(auto v:list) f(v);
}

int main(){
    vector<int> l4 = {1, 2, 3};
    print(l4, &PrintValue00);
    return 0;
    
    vector<int> l3 = {1, 2, 3};
    print(l3, &PrintValue01);
    return 0;

    vector<int> l2 = {1, 2, 3};
    print(l2, &PrintValue);
    return 0;

    vector<int> l1 = {1,2 ,3};
    for_each(l1.begin(), l1.end(), &PrintValue00);
    return 0;

    vector<int> l = {1,2 ,3};
    for_each(l.begin(), l.end(), &PrintValue);
    return 0;

    auto f = PrintHello;
    for(int i=0;i<10;i++) f();
    return 0;
}
