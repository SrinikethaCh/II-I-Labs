#include <iostream>
using namespace std;

class add{
    public:
    int y, z;
    add(){
        y = 7;
        z = 13;
    }
    ~add(){ }
};
int main(){
    add a;
    cout <<"Sum is: "<< a.y+a.z<<endl;
    return 1;
}

