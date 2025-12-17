#include <iostream>
using namespace std;

int main(){
    //内存泄漏  动态分配的内存没释放

    int* p = new int[100];
    p[0] = 10;
    cout<<p[0]<<endl;
    //未执行 delete[] p;
    delete[] p;
    return 0;
}