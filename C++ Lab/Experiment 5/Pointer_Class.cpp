#include<iostream>
#include<string>
using namespace std;
class employee{
	string Name;
	int ID;
	float Salary;
	public:
	    void read(){
		cout<<"Enter the name:";
		cin>>Name;
		cout<<"Enter the ID.No:";
		cin>>ID;
		cout<<"Enter the salary:";
		cin>>Salary;
	    }
	    void display(){
		cout<<"Name of the employee: "<<Name<<endl;
		cout<<"ID.No of the employee: "<<ID<<endl;
		cout<<"Salary of the employee: "<<Salary<<endl;
	    }
};

int main(){
	employee e;
	employee *ptr;
	ptr = &e;
	ptr->read();
	ptr->display();
	return 0;
}
