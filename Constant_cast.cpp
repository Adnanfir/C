#include <iostream>
using namespace std;
int main()
{
    const int n = 5;
    const int *ptr = &n;
    int* non_const_ptr=const_cast<int *>(ptr);
    *non_const_ptr=10;
    cout<<*ptr<<"This is const"<<endl;
    cout<<*non_const_ptr<<"This is not constant"<<endl;
}