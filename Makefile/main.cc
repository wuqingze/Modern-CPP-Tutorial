#include "tool.h"
//#include <stdio.h>
#include <iostream>

int main(){
    int arr[] = {1,8,3,4,5};
    int m = find_max(arr, 5);
//    printf("max = %d\n", m);
    std::cout<<"max = "<<m<<std::endl;
    return 0;
}
