#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
    int a=45;
    float n=static_cast<float>(a);
    const type_info& t1= typeid(a);
    const type_info& t2=typeid(n);
    cout<<t1.name()<<endl;
    cout<<t2.name()<<endl;
    cout<<n<<endl;
    cout<<a<<endl;

}