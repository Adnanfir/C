#include <iostream>
using namespace std;
int main(){
    int x=34;
    
    cout<<"The value of x :"<<x<<endl;
    cout<<"The Address of X is "<<&x<<endl;
    int *ptr=&x;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    
// we use null pointer because to destroy hanging pointer which points at memory addresss thathas already been destroyed



}