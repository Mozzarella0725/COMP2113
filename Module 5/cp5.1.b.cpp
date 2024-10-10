#include <iostream>
using namespace std;
void a(){
    int a;
    a = 8;
    void b(){
        b = 9;
        void c(){
            c = 10;
        }
    }
}

int main(){
    // calling b()
    a();
    return 0;
}
