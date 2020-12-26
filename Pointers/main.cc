#include <iostream> 

struct Vector{
    int x,y;
    //Vector(int x_, int y_):x(x_),y(y_){};
};

int main(){
    Vector *ptr = new Vector[3];
    for(int i=0;i<3;i++) ptr[i] = {i*2+1, i*2+2};

    for(int i=0;i<3;i++){
        auto ptr1 = ptr[i];
        std::cout<<&ptr1<<": "<<ptr1->x<<" "<<ptr1->y<<std::endl;
    }
    return 0;
}
