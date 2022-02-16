#include <iostream>
#include <sstream>
#include <string>
using namespace std; 
   
int main() 
{ 
    string str = "BVRIT HYDERABAD College of Engineering for Women"; 
     
    stringstream s(str);  
    string word; 
   
    int count = 0; 
    while (s >> word) 
        count++;
         
    cout << " Number of words in given string are: " << count; 
    return 0; 
}

