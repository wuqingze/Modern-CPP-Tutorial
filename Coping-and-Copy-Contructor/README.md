### 一般对象都是浅拷贝
比如
```
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
```
结果为
```
1 2 cba
1 2 cba
----------
1 2 aba
3 2 aba
```
