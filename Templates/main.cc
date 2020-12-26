#include <iostream>

using namespace std;

template <typename T>
void print(T t){
    std::cout<<t<<endl;
}
template <typename T>
void print00(T t){
    for(int i=0;i<10;i++){
        std::cout<<t<<endl;
    }
}
struct Obj{
    int x,y;
    friend ostream& operator<<(ostream &pstream, const Obj& o){
        pstream<<o.x<<" "<<o.y;
        return pstream;
    }
};

int main(){
    print(1);
    print(2.0);
    print("hello world");
    Obj o = {1,2};
    print(o);
    print00(o);
    return 0;
}
