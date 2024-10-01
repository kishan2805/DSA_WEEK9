#include <iostream>
#include<string>
#include<vector>
using namespace std;

int x =100; //global

int main() {
    cout<<x<<endl;
    x=101;// change in global

    int x =29;
    cout<<x<<endl;  // local
    cout<<::x<<endl ; // global  

    {
        // as non of the x has been defined here so it will print the most near  local to it 
        cout<<x<<endl; // local 
        cout<<::x<<endl;//global  
    }

}
