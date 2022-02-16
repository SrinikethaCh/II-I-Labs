#include<iostream>
using namespace std;
class Unary {
private: 
int num;
public:
Unary(): num(1){}
void operator ++(){
num = num+10;
}
void print(){
cout<<"The Count is: "<<num;
		}
	};
	int main(){
		Unary u;
		++u;
		u.print();
		return 0;

}
