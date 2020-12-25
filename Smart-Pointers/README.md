### cpp野指针不会自动释放内存，智能指针和非指针会
比如
```
void test00(){
    Collector *c = new Collector();
    //执行完函数不会自动释放内存
}
```
但是
```
void test01(){
    std::unique_ptr<Collector> c(new Collector());
    //执行完会自动释放内存
}
```
同时
```
void test02(){
    Collector c = Collector();
    //执行完会自动释放内存
}
```

