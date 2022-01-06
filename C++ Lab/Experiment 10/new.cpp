#include <iostream>
using namespace std;

int main(){
    int* a;
    a = new int;     // dynamically allocate memory
    *a = 45;     // assigning value to the memory
    cout << *a << endl;
    return 0;
}

